AUTOMAKE_OPTIONS = foreign

CFLAGS = -Wall -pedantic
include_HEADERS = HelloWorld.h

bin_PROGRAMS = helloworld
if MKOZYREV_COMMON_LAYER
bin_PROGRAMS = helloworld_common
endif

helloworld_SOURCES = Main.cpp
