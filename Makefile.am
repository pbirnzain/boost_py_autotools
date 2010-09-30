ACLOCAL_AMFLAGS = -I m4
INCLUDES= -I $(PYTHON_INCLUDE_DIR)
include_HEADERS=grump.h

bin_PROGRAMS=grumpalot
grumpalot_SOURCES=main.cpp
grumpalot_LDADD=libgrump.la
grumpalot_LDFLAGS=

lib_LTLIBRARIES=libgrump.la
libgrump_la_SOURCES=grump.cpp
libgrump_la_LDFLAGS=-version-info 0:0:0 -l$(PYTHON_LIB) -l$(BOOST_PYTHON_LIB)

