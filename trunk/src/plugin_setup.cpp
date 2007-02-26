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

#include "plugin.h"
#include "plugin_list.h"        
#include "plugin_setup.h"
        
void new_instance(nsPluginInstance *instance, nsPluginCreateData *parameters) {
    
    gint i;
    gint newwindow = 0;
    ListItem *item = NULL;
    ListItem *src = NULL;
    ListItem *href = NULL;
    
    instance->mode = parameters->mode;
    instance->mimetype = g_strdup(parameters->type);
    instance->mInstance = parameters->instance;
    
    if (instance->mode == NP_EMBED) {
        for (i = 0; i < parameters->argc; i++) {
            printf("ARG: %s = %s\n",parameters->argn[i],parameters->argv[i]);
            
            
            if (g_ascii_strcasecmp(parameters->argn[i],"src") == 0) {
                item = g_new0(ListItem,1);
                g_strlcpy(item->src,parameters->argv[i],1024);
                // printf("Item src = %s\n",item->src);
                item->streaming = streaming(item->src);
                item->play = TRUE;
                item->id = instance->nextid++;
                instance->playlist = g_list_append(instance->playlist,item);
                src = item;
            }
            
            if (g_ascii_strcasecmp(parameters->argn[i],"href") == 0) {
                item = g_new0(ListItem,1);
                g_strlcpy(item->src,parameters->argv[i],1024);
                // printf("Item href = %s\n",item->src);
                item->streaming = streaming(item->src);
                item->play = FALSE;
                item->id = instance->nextid++;
                instance->playlist = g_list_append(instance->playlist,item);
                href = item;
            }
            
            if (g_ascii_strcasecmp(parameters->argn[i],"file") == 0) {
                item = g_new0(ListItem,1);
                g_strlcpy(item->local,parameters->argv[i],1024);
                // printf("Item href = %s\n",item->src);
                item->streaming = streaming(item->src);
                item->play = TRUE;
                item->id = instance->nextid++;
                instance->playlist = g_list_append(instance->playlist,item);
                src = item;
            }
            
            if (g_ascii_strcasecmp(parameters->argn[i],"target") == 0) {
                if (g_ascii_strcasecmp(parameters->argv[i],"quicktimeplayer") == 0) {
                    newwindow = TRUE;
                }
            }
        };
    } else {
        
    }
    
    // link up src to href objects by id
    if (href != NULL && src != NULL) {
        src->hrefid = href->id; 
    }
    
    // if target is set, set it on the href
    if (href != NULL) {
        href->newwindow = newwindow;
    }
    list_dump(instance->playlist);
}

gint streaming(gchar *url) {
    gint ret = 0;
        
    if (strstr(url,"mms://") != NULL)
        ret = 1;
    
    if (strstr(url,"mmst://") != NULL)
        ret = 1;
    
    if (strstr(url,"mmsu://") != NULL)
        ret = 1;
    
    if (strstr(url,"rtsp://") != NULL)
        ret = 1;
    
    if (strstr(url,"tv://") != NULL)
        ret = 1;
    
    if (strstr(url,"dvd://") != NULL)
        ret = 1;

    return ret;
}

