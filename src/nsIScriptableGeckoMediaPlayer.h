/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM nsIScriptableGeckoMediaPlayer.idl
 */

#ifndef __gen_nsIScriptableGeckoMediaPlayer_h__
#define __gen_nsIScriptableGeckoMediaPlayer_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIScriptableGeckoMediaPlayerControls */
#define NS_ISCRIPTABLEGECKOMEDIAPLAYERCONTROLS_IID_STR "f728830e-1dd1-4444-6666-fb9f414f2465"

#define NS_ISCRIPTABLEGECKOMEDIAPLAYERCONTROLS_IID \
  {0xf728830e, 0x1dd1, 0x4444, \
    { 0x66, 0x66, 0xfb, 0x9f, 0x41, 0x4f, 0x24, 0x65 }}

class NS_NO_VTABLE nsIScriptableGeckoMediaPlayerControls : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ISCRIPTABLEGECKOMEDIAPLAYERCONTROLS_IID)

  /* void play (); */
  NS_IMETHOD Play(void) = 0;

  /* void pause (); */
  NS_IMETHOD Pause(void) = 0;

  /* void stop (); */
  NS_IMETHOD Stop(void) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISCRIPTABLEGECKOMEDIAPLAYERCONTROLS \
  NS_IMETHOD Play(void); \
  NS_IMETHOD Pause(void); \
  NS_IMETHOD Stop(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISCRIPTABLEGECKOMEDIAPLAYERCONTROLS(_to) \
  NS_IMETHOD Play(void) { return _to Play(); } \
  NS_IMETHOD Pause(void) { return _to Pause(); } \
  NS_IMETHOD Stop(void) { return _to Stop(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISCRIPTABLEGECKOMEDIAPLAYERCONTROLS(_to) \
  NS_IMETHOD Play(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Play(); } \
  NS_IMETHOD Pause(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Pause(); } \
  NS_IMETHOD Stop(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Stop(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsScriptableGeckoMediaPlayerControls : public nsIScriptableGeckoMediaPlayerControls
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISCRIPTABLEGECKOMEDIAPLAYERCONTROLS

  nsScriptableGeckoMediaPlayerControls();

private:
  ~nsScriptableGeckoMediaPlayerControls();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsScriptableGeckoMediaPlayerControls, nsIScriptableGeckoMediaPlayerControls)

nsScriptableGeckoMediaPlayerControls::nsScriptableGeckoMediaPlayerControls()
{
  /* member initializers and constructor code */
}

nsScriptableGeckoMediaPlayerControls::~nsScriptableGeckoMediaPlayerControls()
{
  /* destructor code */
}

/* void play (); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayerControls::Play()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void pause (); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayerControls::Pause()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void stop (); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayerControls::Stop()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIScriptableGeckoMediaPlayer */
#define NS_ISCRIPTABLEGECKOMEDIAPLAYER_IID_STR "f728830f-1dd1-4444-6666-fb9f414f2465"

#define NS_ISCRIPTABLEGECKOMEDIAPLAYER_IID \
  {0xf728830f, 0x1dd1, 0x4444, \
    { 0x66, 0x66, 0xfb, 0x9f, 0x41, 0x4f, 0x24, 0x65 }}

class NS_NO_VTABLE nsIScriptableGeckoMediaPlayer : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ISCRIPTABLEGECKOMEDIAPLAYER_IID)

  /* void Play (); */
  NS_IMETHOD Play(void) = 0;

  /* void PlayAt (in double value); */
  NS_IMETHOD PlayAt(double value) = 0;

  /* void Pause (); */
  NS_IMETHOD Pause(void) = 0;

  /* void Stop (); */
  NS_IMETHOD Stop(void) = 0;

  /* void quit (); */
  NS_IMETHOD Quit(void) = 0;

  /* void DoPlay (); */
  NS_IMETHOD DoPlay(void) = 0;

  /* void DoPause (); */
  NS_IMETHOD DoPause(void) = 0;

  /* void FastForward (); */
  NS_IMETHOD FastForward(void) = 0;

  /* void FastReverse (); */
  NS_IMETHOD FastReverse(void) = 0;

  /* void ff (); */
  NS_IMETHOD Ff(void) = 0;

  /* void rew (); */
  NS_IMETHOD Rew(void) = 0;

  /* void rewind (); */
  NS_IMETHOD Rewind(void) = 0;

  /* void Seek (in double value); */
  NS_IMETHOD Seek(double value) = 0;

  /* void Open (in string filename); */
  NS_IMETHOD Open(const char *filename) = 0;

  /* void SetVolume (in double value); */
  NS_IMETHOD SetVolume(double value) = 0;

  /* double GetVolume (); */
  NS_IMETHOD GetVolume(double *_retval) = 0;

  /* void SetFileName (in string filename); */
  NS_IMETHOD SetFileName(const char *filename) = 0;

  /* void SetIsLooping (in boolean loop); */
  NS_IMETHOD SetIsLooping(PRBool loop) = 0;

  /* boolean GetIsLooping (); */
  NS_IMETHOD GetIsLooping(PRBool *_retval) = 0;

  /* void SetAutoPlay (in boolean autoPlay); */
  NS_IMETHOD SetAutoPlay(PRBool autoPlay) = 0;

  /* boolean GetAutoPlay (); */
  NS_IMETHOD GetAutoPlay(PRBool *_retval) = 0;

  /* void SetHREF (in string url); */
  NS_IMETHOD SetHREF(const char *url) = 0;

  /* string GetHREF (); */
  NS_IMETHOD GetHREF(char **_retval) = 0;

  /* void SetURL (in string url); */
  NS_IMETHOD SetURL(const char *url) = 0;

  /* string GetURL (); */
  NS_IMETHOD GetURL(char **_retval) = 0;

  /* string GetMIMEType (); */
  NS_IMETHOD GetMIMEType(char **_retval) = 0;

  /* double getTime (); */
  NS_IMETHOD GetTime(double *_retval) = 0;

  /* double getDuration (); */
  NS_IMETHOD GetDuration(double *_retval) = 0;

  /* double getPercent (); */
  NS_IMETHOD GetPercent(double *_retval) = 0;

  /* boolean isplaying (); */
  NS_IMETHOD Isplaying(PRBool *_retval) = 0;

  /* void playlistAppend (in string item); */
  NS_IMETHOD PlaylistAppend(const char *item) = 0;

  /* boolean playlistClear (); */
  NS_IMETHOD PlaylistClear(PRBool *_retval) = 0;

  /* attribute string filename; */
  NS_IMETHOD GetFilename(char * *aFilename) = 0;
  NS_IMETHOD SetFilename(const char * aFilename) = 0;

  /* attribute boolean ShowControls; */
  NS_IMETHOD GetShowControls(PRBool *aShowControls) = 0;
  NS_IMETHOD SetShowControls(PRBool aShowControls) = 0;

  /* attribute boolean fullscreen; */
  NS_IMETHOD GetFullscreen(PRBool *aFullscreen) = 0;
  NS_IMETHOD SetFullscreen(PRBool aFullscreen) = 0;

  /* attribute boolean showlogo; */
  NS_IMETHOD GetShowlogo(PRBool *aShowlogo) = 0;
  NS_IMETHOD SetShowlogo(PRBool aShowlogo) = 0;

  /* readonly attribute long playState; */
  NS_IMETHOD GetPlayState(PRInt32 *aPlayState) = 0;

  /* readonly attribute nsIScriptableGeckoMediaPlayerControls controls; */
  NS_IMETHOD GetControls(nsIScriptableGeckoMediaPlayerControls * *aControls) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISCRIPTABLEGECKOMEDIAPLAYER \
  NS_IMETHOD Play(void); \
  NS_IMETHOD PlayAt(double value); \
  NS_IMETHOD Pause(void); \
  NS_IMETHOD Stop(void); \
  NS_IMETHOD Quit(void); \
  NS_IMETHOD DoPlay(void); \
  NS_IMETHOD DoPause(void); \
  NS_IMETHOD FastForward(void); \
  NS_IMETHOD FastReverse(void); \
  NS_IMETHOD Ff(void); \
  NS_IMETHOD Rew(void); \
  NS_IMETHOD Rewind(void); \
  NS_IMETHOD Seek(double value); \
  NS_IMETHOD Open(const char *filename); \
  NS_IMETHOD SetVolume(double value); \
  NS_IMETHOD GetVolume(double *_retval); \
  NS_IMETHOD SetFileName(const char *filename); \
  NS_IMETHOD SetIsLooping(PRBool loop); \
  NS_IMETHOD GetIsLooping(PRBool *_retval); \
  NS_IMETHOD SetAutoPlay(PRBool autoPlay); \
  NS_IMETHOD GetAutoPlay(PRBool *_retval); \
  NS_IMETHOD SetHREF(const char *url); \
  NS_IMETHOD GetHREF(char **_retval); \
  NS_IMETHOD SetURL(const char *url); \
  NS_IMETHOD GetURL(char **_retval); \
  NS_IMETHOD GetMIMEType(char **_retval); \
  NS_IMETHOD GetTime(double *_retval); \
  NS_IMETHOD GetDuration(double *_retval); \
  NS_IMETHOD GetPercent(double *_retval); \
  NS_IMETHOD Isplaying(PRBool *_retval); \
  NS_IMETHOD PlaylistAppend(const char *item); \
  NS_IMETHOD PlaylistClear(PRBool *_retval); \
  NS_IMETHOD GetFilename(char * *aFilename); \
  NS_IMETHOD SetFilename(const char * aFilename); \
  NS_IMETHOD GetShowControls(PRBool *aShowControls); \
  NS_IMETHOD SetShowControls(PRBool aShowControls); \
  NS_IMETHOD GetFullscreen(PRBool *aFullscreen); \
  NS_IMETHOD SetFullscreen(PRBool aFullscreen); \
  NS_IMETHOD GetShowlogo(PRBool *aShowlogo); \
  NS_IMETHOD SetShowlogo(PRBool aShowlogo); \
  NS_IMETHOD GetPlayState(PRInt32 *aPlayState); \
  NS_IMETHOD GetControls(nsIScriptableGeckoMediaPlayerControls * *aControls); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISCRIPTABLEGECKOMEDIAPLAYER(_to) \
  NS_IMETHOD Play(void) { return _to Play(); } \
  NS_IMETHOD PlayAt(double value) { return _to PlayAt(value); } \
  NS_IMETHOD Pause(void) { return _to Pause(); } \
  NS_IMETHOD Stop(void) { return _to Stop(); } \
  NS_IMETHOD Quit(void) { return _to Quit(); } \
  NS_IMETHOD DoPlay(void) { return _to DoPlay(); } \
  NS_IMETHOD DoPause(void) { return _to DoPause(); } \
  NS_IMETHOD FastForward(void) { return _to FastForward(); } \
  NS_IMETHOD FastReverse(void) { return _to FastReverse(); } \
  NS_IMETHOD Ff(void) { return _to Ff(); } \
  NS_IMETHOD Rew(void) { return _to Rew(); } \
  NS_IMETHOD Rewind(void) { return _to Rewind(); } \
  NS_IMETHOD Seek(double value) { return _to Seek(value); } \
  NS_IMETHOD Open(const char *filename) { return _to Open(filename); } \
  NS_IMETHOD SetVolume(double value) { return _to SetVolume(value); } \
  NS_IMETHOD GetVolume(double *_retval) { return _to GetVolume(_retval); } \
  NS_IMETHOD SetFileName(const char *filename) { return _to SetFileName(filename); } \
  NS_IMETHOD SetIsLooping(PRBool loop) { return _to SetIsLooping(loop); } \
  NS_IMETHOD GetIsLooping(PRBool *_retval) { return _to GetIsLooping(_retval); } \
  NS_IMETHOD SetAutoPlay(PRBool autoPlay) { return _to SetAutoPlay(autoPlay); } \
  NS_IMETHOD GetAutoPlay(PRBool *_retval) { return _to GetAutoPlay(_retval); } \
  NS_IMETHOD SetHREF(const char *url) { return _to SetHREF(url); } \
  NS_IMETHOD GetHREF(char **_retval) { return _to GetHREF(_retval); } \
  NS_IMETHOD SetURL(const char *url) { return _to SetURL(url); } \
  NS_IMETHOD GetURL(char **_retval) { return _to GetURL(_retval); } \
  NS_IMETHOD GetMIMEType(char **_retval) { return _to GetMIMEType(_retval); } \
  NS_IMETHOD GetTime(double *_retval) { return _to GetTime(_retval); } \
  NS_IMETHOD GetDuration(double *_retval) { return _to GetDuration(_retval); } \
  NS_IMETHOD GetPercent(double *_retval) { return _to GetPercent(_retval); } \
  NS_IMETHOD Isplaying(PRBool *_retval) { return _to Isplaying(_retval); } \
  NS_IMETHOD PlaylistAppend(const char *item) { return _to PlaylistAppend(item); } \
  NS_IMETHOD PlaylistClear(PRBool *_retval) { return _to PlaylistClear(_retval); } \
  NS_IMETHOD GetFilename(char * *aFilename) { return _to GetFilename(aFilename); } \
  NS_IMETHOD SetFilename(const char * aFilename) { return _to SetFilename(aFilename); } \
  NS_IMETHOD GetShowControls(PRBool *aShowControls) { return _to GetShowControls(aShowControls); } \
  NS_IMETHOD SetShowControls(PRBool aShowControls) { return _to SetShowControls(aShowControls); } \
  NS_IMETHOD GetFullscreen(PRBool *aFullscreen) { return _to GetFullscreen(aFullscreen); } \
  NS_IMETHOD SetFullscreen(PRBool aFullscreen) { return _to SetFullscreen(aFullscreen); } \
  NS_IMETHOD GetShowlogo(PRBool *aShowlogo) { return _to GetShowlogo(aShowlogo); } \
  NS_IMETHOD SetShowlogo(PRBool aShowlogo) { return _to SetShowlogo(aShowlogo); } \
  NS_IMETHOD GetPlayState(PRInt32 *aPlayState) { return _to GetPlayState(aPlayState); } \
  NS_IMETHOD GetControls(nsIScriptableGeckoMediaPlayerControls * *aControls) { return _to GetControls(aControls); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISCRIPTABLEGECKOMEDIAPLAYER(_to) \
  NS_IMETHOD Play(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Play(); } \
  NS_IMETHOD PlayAt(double value) { return !_to ? NS_ERROR_NULL_POINTER : _to->PlayAt(value); } \
  NS_IMETHOD Pause(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Pause(); } \
  NS_IMETHOD Stop(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Stop(); } \
  NS_IMETHOD Quit(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Quit(); } \
  NS_IMETHOD DoPlay(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->DoPlay(); } \
  NS_IMETHOD DoPause(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->DoPause(); } \
  NS_IMETHOD FastForward(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->FastForward(); } \
  NS_IMETHOD FastReverse(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->FastReverse(); } \
  NS_IMETHOD Ff(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Ff(); } \
  NS_IMETHOD Rew(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Rew(); } \
  NS_IMETHOD Rewind(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Rewind(); } \
  NS_IMETHOD Seek(double value) { return !_to ? NS_ERROR_NULL_POINTER : _to->Seek(value); } \
  NS_IMETHOD Open(const char *filename) { return !_to ? NS_ERROR_NULL_POINTER : _to->Open(filename); } \
  NS_IMETHOD SetVolume(double value) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVolume(value); } \
  NS_IMETHOD GetVolume(double *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVolume(_retval); } \
  NS_IMETHOD SetFileName(const char *filename) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFileName(filename); } \
  NS_IMETHOD SetIsLooping(PRBool loop) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIsLooping(loop); } \
  NS_IMETHOD GetIsLooping(PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsLooping(_retval); } \
  NS_IMETHOD SetAutoPlay(PRBool autoPlay) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAutoPlay(autoPlay); } \
  NS_IMETHOD GetAutoPlay(PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAutoPlay(_retval); } \
  NS_IMETHOD SetHREF(const char *url) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHREF(url); } \
  NS_IMETHOD GetHREF(char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHREF(_retval); } \
  NS_IMETHOD SetURL(const char *url) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetURL(url); } \
  NS_IMETHOD GetURL(char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetURL(_retval); } \
  NS_IMETHOD GetMIMEType(char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMIMEType(_retval); } \
  NS_IMETHOD GetTime(double *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTime(_retval); } \
  NS_IMETHOD GetDuration(double *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDuration(_retval); } \
  NS_IMETHOD GetPercent(double *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPercent(_retval); } \
  NS_IMETHOD Isplaying(PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->Isplaying(_retval); } \
  NS_IMETHOD PlaylistAppend(const char *item) { return !_to ? NS_ERROR_NULL_POINTER : _to->PlaylistAppend(item); } \
  NS_IMETHOD PlaylistClear(PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->PlaylistClear(_retval); } \
  NS_IMETHOD GetFilename(char * *aFilename) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFilename(aFilename); } \
  NS_IMETHOD SetFilename(const char * aFilename) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFilename(aFilename); } \
  NS_IMETHOD GetShowControls(PRBool *aShowControls) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetShowControls(aShowControls); } \
  NS_IMETHOD SetShowControls(PRBool aShowControls) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetShowControls(aShowControls); } \
  NS_IMETHOD GetFullscreen(PRBool *aFullscreen) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFullscreen(aFullscreen); } \
  NS_IMETHOD SetFullscreen(PRBool aFullscreen) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFullscreen(aFullscreen); } \
  NS_IMETHOD GetShowlogo(PRBool *aShowlogo) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetShowlogo(aShowlogo); } \
  NS_IMETHOD SetShowlogo(PRBool aShowlogo) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetShowlogo(aShowlogo); } \
  NS_IMETHOD GetPlayState(PRInt32 *aPlayState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPlayState(aPlayState); } \
  NS_IMETHOD GetControls(nsIScriptableGeckoMediaPlayerControls * *aControls) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetControls(aControls); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsScriptableGeckoMediaPlayer : public nsIScriptableGeckoMediaPlayer
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISCRIPTABLEGECKOMEDIAPLAYER

  nsScriptableGeckoMediaPlayer();

private:
  ~nsScriptableGeckoMediaPlayer();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsScriptableGeckoMediaPlayer, nsIScriptableGeckoMediaPlayer)

nsScriptableGeckoMediaPlayer::nsScriptableGeckoMediaPlayer()
{
  /* member initializers and constructor code */
}

nsScriptableGeckoMediaPlayer::~nsScriptableGeckoMediaPlayer()
{
  /* destructor code */
}

/* void Play (); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::Play()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void PlayAt (in double value); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::PlayAt(double value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Pause (); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::Pause()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Stop (); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::Stop()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void quit (); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::Quit()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void DoPlay (); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::DoPlay()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void DoPause (); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::DoPause()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void FastForward (); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::FastForward()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void FastReverse (); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::FastReverse()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void ff (); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::Ff()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void rew (); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::Rew()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void rewind (); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::Rewind()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Seek (in double value); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::Seek(double value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Open (in string filename); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::Open(const char *filename)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetVolume (in double value); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::SetVolume(double value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* double GetVolume (); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::GetVolume(double *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetFileName (in string filename); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::SetFileName(const char *filename)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetIsLooping (in boolean loop); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::SetIsLooping(PRBool loop)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean GetIsLooping (); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::GetIsLooping(PRBool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetAutoPlay (in boolean autoPlay); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::SetAutoPlay(PRBool autoPlay)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean GetAutoPlay (); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::GetAutoPlay(PRBool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetHREF (in string url); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::SetHREF(const char *url)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetHREF (); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::GetHREF(char **_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetURL (in string url); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::SetURL(const char *url)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetURL (); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::GetURL(char **_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetMIMEType (); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::GetMIMEType(char **_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* double getTime (); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::GetTime(double *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* double getDuration (); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::GetDuration(double *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* double getPercent (); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::GetPercent(double *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isplaying (); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::Isplaying(PRBool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void playlistAppend (in string item); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::PlaylistAppend(const char *item)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean playlistClear (); */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::PlaylistClear(PRBool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string filename; */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::GetFilename(char * *aFilename)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::SetFilename(const char * aFilename)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean ShowControls; */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::GetShowControls(PRBool *aShowControls)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::SetShowControls(PRBool aShowControls)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean fullscreen; */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::GetFullscreen(PRBool *aFullscreen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::SetFullscreen(PRBool aFullscreen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean showlogo; */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::GetShowlogo(PRBool *aShowlogo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::SetShowlogo(PRBool aShowlogo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long playState; */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::GetPlayState(PRInt32 *aPlayState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIScriptableGeckoMediaPlayerControls controls; */
NS_IMETHODIMP nsScriptableGeckoMediaPlayer::GetControls(nsIScriptableGeckoMediaPlayerControls * *aControls)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIScriptableGeckoMediaPlayer_h__ */
