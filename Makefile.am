AUTOMAKE_OPTIONS = foreign

CFLAGS = -Wall -pedantic
include_HEADERS = HelloWorld.h

if MKOZYREV_COMMON_LAYER
bin_PROGRAMS = helloworld_common
else
bin_PROGRAMS = helloworld
endif

helloworld_SOURCES = Main.cpp
