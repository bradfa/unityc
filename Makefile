# Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
# Released under a modified version of the MIT License

TARGET = testunity.out
SRC_FILES=src/unity.c test/testunity.c test/testunity_Runner.c
INC_DIRS=-Isrc
SYMBOLS=-DTEST -DUNITY_SUPPORT_64 -DUNITY_INCLUDE_DOUBLE

all: default

default:
	$(CC) $(INC_DIRS) $(SYMBOLS) $(SRC_FILES) -o $(TARGET)
	exec ./$(TARGET)

clean:
	rm -f $(TARGET)

