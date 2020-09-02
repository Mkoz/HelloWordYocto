AUTOMAKE_OPTIONS = foreign

CFLAGS = -Wall -pedantic
include_HEADERS = HelloWorld.h

echo "debug: "$COMMON_LAYER
if COMMON_LAYER
bin_PROGRAMS = helloworld_common
else !COMMON_LAYER
bin_PROGRAMS = helloworld
endif !COMMON_LAYER

helloworld_SOURCES = Main.cpp
helloworld_common_SOURCES = Main.cpp
