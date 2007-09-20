## Process this file with automake to produce Makefile.in
## Created by Anjuta

SUBDIRS = src po

gecko_mediaplayerdocdir = ${prefix}/share/doc/gecko-mediaplayer
gecko_mediaplayerdoc_DATA = \
	README\
	COPYING\
	AUTHORS\
	ChangeLog\
	INSTALL\
	NEWS

gecko_mediaplayeretcdir = ${sysconfdir}/gconf/schemas
gecko_mediaplayeretc_DATA = gecko-mediaplayer.schemas

EXTRA_DIST = $(gecko_mediaplayerdoc_DATA) $(gecko_mediaplayeretc_DATA) gecko-mediaplayer.spec.in

# Copy all the spec files. Of cource, only one is actually used.
dist-hook:
	for specfile in *.spec; do \
		if test -f $$specfile; then \
			cp -p $$specfile $(distdir); \
		fi \
	done

