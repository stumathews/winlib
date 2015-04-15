AM_CPPFLAGS = -I$(top_builddir)/src/includes

bin_PROGRAMS	= mutex

TESTS=$(check_PROGRAMS)
check_PROGRAMS= mutex

mutex_SOURCES = mutex.c
mutex_LDADD = $(top_builddir)/src/libwinc.la

