AUTOMAKE_OPTIONS = foreign

CFLAGS = -Wall -pedantic
include_HEADERS = HelloWorld.h


if MKOZYREV_COMMON_LAYER
bin_PROGRAMS = helloworld_common
else !MKOZYREV_COMMON_LAYER
bin_PROGRAMS = helloworld
endif !MKOZYREV_COMMON_LAYER

helloworld_SOURCES = Main.cpp
helloworld_common_SOURCES = Main.cpp
