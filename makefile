# Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
# Released under a modified version of the MIT License

TARGET_BASE = testunity
TARGET_EXTENSION=.out
TARGET = $(TARGET_BASE)$(TARGET_EXTENSION)
OUT_FILE=-o $(TARGET)
SRC_FILES=src/unity.c test/testunity.c test/testunity_Runner.c
INC_DIRS=-Isrc
SYMBOLS=-DTEST -DUNITY_SUPPORT_64 -DUNITY_INCLUDE_DOUBLE

CLEANUP = rm -f build/*.o ; rm -f $(TARGET)

all: clean default

default:
	$(CC) $(INC_DIRS) $(SYMBOLS) $(SRC_FILES) $(OUT_FILE)
	exec ./$(TARGET)

clean:
	$(CLEANUP)

