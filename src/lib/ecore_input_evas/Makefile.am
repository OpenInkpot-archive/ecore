MAINTAINERCLEANFILES = Makefile.in

AM_CPPFLAGS = \
-I$(top_srcdir)/src/lib/ecore_input \
-I$(top_builddir)/src/lib/ecore_input \
-I$(top_srcdir)/src/lib/ecore \
-I$(top_builddir)/src/lib/ecore \
@EFL_ECORE_INPUT_EVAS_BUILD@ \
@EVAS_CFLAGS@ \
@EINA_CFLAGS@ \
@EVIL_CFLAGS@

if BUILD_ECORE_INPUT_EVAS

lib_LTLIBRARIES = libecore_input_evas.la
include_HEADERS = Ecore_Input_Evas.h

libecore_input_evas_la_SOURCES = \
ecore_input_evas.c

libecore_input_evas_la_LIBADD = \
$(top_builddir)/src/lib/ecore/libecore.la \
$(top_builddir)/src/lib/ecore_input/libecore_input.la \
@EVAS_LIBS@ \
@EINA_LIBS@ \
@EVIL_LIBS@

libecore_input_evas_la_LDFLAGS = -no-undefined @lt_enable_auto_import@ -version-info @version_info@ @release_info@

endif

EXTRA_DIST = ecore_input_evas_private.h
