MAINTAINERCLEANFILES = Makefile.in

AM_CPPFLAGS = \
-I$(top_srcdir)/src/lib/ecore \
-I$(top_builddir)/src/lib/ecore \
@EFL_ECORE_INPUT_BUILD@ \
@EINA_CFLAGS@ \
@EVIL_CFLAGS@

if BUILD_ECORE_INPUT

lib_LTLIBRARIES = libecore_input.la
include_HEADERS = Ecore_Input.h

libecore_input_la_SOURCES = \
ecore_input.c

libecore_input_la_LIBADD = \
$(top_builddir)/src/lib/ecore/libecore.la \
@EINA_LIBS@ \
@EVIL_LIBS@

libecore_input_la_LDFLAGS = -no-undefined @lt_enable_auto_import@ -version-info @version_info@ @release_info@

endif

EXTRA_DIST = ecore_input_private.h
