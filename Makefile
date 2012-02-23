# Compiler to use (default g++)
CC=g++
# Basic compile flags
CFLAGS=-c
# Linker flags
LDFLAGS=
# Source files to include
SOURCES=main.cpp Game.h Character.h Character.cpp Weapon.h Armor.h Random.h Random.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=game

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
