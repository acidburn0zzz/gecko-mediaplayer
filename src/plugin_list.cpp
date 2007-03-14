/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is mozilla.org code.
 *
 * The Initial Developer of the Original Code is
 * Netscape Communications Corporation.
 * Portions created by the Initial Developer are Copyright (C) 1998
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 * ***** END LICENSE BLOCK ***** */

#include "plugin_list.h"
        
ListItem *list_find(GList* list, gchar *url) {
    ListItem *item;
    GList *iter;   
    
    for (iter = list; iter !=NULL; iter = g_list_next(iter)) {
        item = (ListItem *)iter->data;
        // printf("list_find item = %s, url = %s\n",item->src,url);
        if (item != NULL) {
            if (g_ascii_strcasecmp(item->src,url) == 0 && item->play == TRUE) {
                // printf("found %s at %p\n",url,item);
                return item;
            }
        }
    }
    
    return NULL;    
}

ListItem *list_find_by_id(GList* list, gint id) {
    ListItem *item;
    GList *iter;   
    
    for (iter = list; iter !=NULL; iter = g_list_next(iter)) {
        item = (ListItem *)iter->data;
        if (item != NULL) {
            if (item->id == id) {
                return item;
            }
        }
    }
    
    return NULL;    
}

ListItem *list_find_by_controlid(GList* list, gint id) {
    ListItem *item;
    GList *iter;
    ListItem *ret = NULL;
          
    for (iter = list; iter !=NULL; iter = g_list_next(iter)) {
        if (iter != NULL) {
            item = (ListItem *)iter->data;
            if (item != NULL) {
                if (item->controlid == id) {
                    ret = item;
                }
            }
        }
    }
    
    return ret;    
}

void list_mark_controlid_ready(GList* list, gint id) {
    ListItem *item;
    GList *iter;   
    
    for (iter = list; iter !=NULL; iter = g_list_next(iter)) {
        item = (ListItem *)iter->data;
        if (item != NULL) {
            if (item->controlid == id) {
                item->playerready = TRUE;
            }
        }
    }
    
    return;    
}

void list_mark_controlid_cancelled(GList* list, gint id, gboolean cancelled){
    ListItem *item;
    GList *iter;   
    
    for (iter = list; iter !=NULL; iter = g_list_next(iter)) {
        item = (ListItem *)iter->data;
        if (item != NULL) {
            if (item->controlid == id) {
                item->cancelled = cancelled;
            }
        }
    }
    
    return;    
}

ListItem *list_find_next_playable(GList* list) {
    ListItem *item;
    GList *iter;   
    
    for (iter = list; iter !=NULL; iter = g_list_next(iter)) {
        item = (ListItem *)iter->data;
        if (item != NULL) {
            if (item->played == FALSE && item->play == TRUE) {
                //printf("next playable is %s\n",item->src);
                return item;
            }
        }
    }
    return NULL;    
}

GList *list_clear(GList *list) {
    ListItem *item;
    GList *iter;   
    
    // printf("clearing list\n");
    if (list != NULL) {
        for (iter = list; iter !=NULL; iter = g_list_next(iter)) {
            item = (ListItem *)iter->data;
            if (item != NULL) {
                if (item->localfp) {
                    fclose(item->localfp);
                }
                if (strlen(item->local) > 0) {
                    g_unlink(item->local);
                }
            }
        }
        g_list_free(list);
    }
            
    return NULL;
}

void list_dump(GList *list) {
    ListItem *item;
    GList *iter;   
    
    // printf("clearing list\n");
    if (list != NULL) {
        for (iter = list; iter !=NULL; iter = g_list_next(iter)) {
            item = (ListItem *)iter->data;
            if (item != NULL) {
                printf("Item \n");
                printf("src = %s\n",item->src);
                printf("id = %i\n",item->id);
                printf("play = %i\n",item->play);
                printf("path = %s\n",item->path);
                printf("controlid = %i\n",item->controlid);
                printf("playerready = %i\n", item->playerready);
                printf("newwindow = %i\n", item->newwindow);
            }
        }
    }
}


GList *list_parse_qt(GList *list, ListItem *item) {
    ListItem *newitem;
    gchar *data;
    gsize datalen;
    gchar *p;
    gchar *nextrmda;
    gchar *rdrf;    // this is the pointer to a URL that we are adding
    gchar *rmdr;    // this is data about the URL
    gchar url[1024];
    gchar *ptr;
    unsigned int code;  // some value about the URL
    
    
    gint i;
    
    printf("Entering list_parse_qt localsize = %i\n", item->localsize);
    
    if (item->localsize < (16*1024)) {
        if (g_file_get_contents(item->local,&data,&datalen,NULL)) {
            //printf("read %i bytes from %s\n",datalen, item->local);
            p = (gchar *)memmem(data,datalen,"rmda", 4);
            if ( p == NULL) {
                printf("unable to find rmda in %s\n", item->local);
                return list;
            } else {
                if (datalen > 4) {
                    p += 4;     // skip the rmda tag we just found
                                // and find the next one
                    nextrmda = (gchar*)memmem(p,datalen - (p - data),"rmda", 4);
                    if (nextrmda == NULL) {
                        nextrmda = data+datalen;    // point the pointer at the end of the buffer
                    }
                }
                
                while(p != NULL) {
                    rdrf =(gchar *) memmem(p, datalen - ((long) nextrmda - (long) p), "rdrf", 4);
                    rmdr =(gchar *) memmem(p, datalen - ((long) nextrmda - (long) p), "rmdr", 4);
                    
                    if (rdrf != NULL) {
                        code = (unsigned int) (rdrf[15]);
                        rdrf = rdrf + 16;
                        //printf("URL: %s\n", rdrf);
                        //printf("CODE: %d\n", code);
                    }                    
                    
                    g_strlcpy(url,item->src,1024);
                    ptr = g_strrstr(url,"/");
                    if (ptr != NULL && g_strrstr(rdrf,"://") == NULL) {
                        ptr++;
                        ptr[0] = NULL;
                        g_strlcat(url,rdrf,1024);
                    } else {
                        g_strlcpy(url,rdrf, 1024);
                    }
                        
                    
                    if (rdrf != NULL) {
                        if (code == 163 || code == 165 || code == 167
                            || code == (unsigned int) -93
                            || code == (unsigned int) -91
                            || code == (unsigned int) -89) {
                                printf("Skipped URL: %s\n", rdrf);
                            } else {
                                if (list_find(list,url) == NULL) {
                                    item->play = FALSE;
                                    newitem = g_new0(ListItem,1);
                                    g_strlcpy(newitem->src,url,1024);
                                    // newitem->streaming = streaming(newitem->src);
                                    newitem->play = TRUE;
                                    newitem->id = item->id;
                                    item->id = -1;
                                    list = g_list_append(list,newitem);
                                }
                            }
                    }
                    
                    p = nextrmda + 4;
                    if (p > (data + datalen)) {
                        p = NULL;
                    } else {
                        nextrmda = (gchar*)memmem(p,datalen - (p - data),"rmda", 4);
                        if (nextrmda == NULL) {
                            nextrmda = data+datalen;    // point the pointer at the end of the buffer
                        }
                    }                    
                    
                }
                
            }
            
        } else {
            // printf("Unable to open %s \n",item->local); 
        }
        
    } else {
        // if file is over 16K it is probably not a playlist
        // so skip parsing it.
        //printf("file not parsed > 16K actual size is %i\n",item->localsize);
    }
    //list_dump(list);
    printf("Exiting list_parse_qt\n");
    return list;
    
}
