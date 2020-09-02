AUTOMAKE_OPTIONS = foreign

CFLAGS = -Wall -pedantic
include_HEADERS = HelloWorld.h

bin_PROGRAMS = helloworld
ifdef $(MKOZYREV_COMMON_LAYER)
bin_PROGRAMS += _common
endif

helloworld_SOURCES = Main.cpp
