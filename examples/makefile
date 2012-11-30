# ==========================================
#   Unity Project - A Test Framework for C
#   Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
#   [Released under a modified version of the MIT License.]
# ========================================== 

TARGET_BASE1=test1
TARGET_BASE2=test2
TARGET_EXTENSION=.out
TARGET1 = $(TARGET_BASE1)$(TARGET_EXTENSION)
TARGET2 = $(TARGET_BASE2)$(TARGET_EXTENSION)
SRC_FILES1=../src/unity.c src/ProductionCode.c  test/TestProductionCode.c  test/no_ruby/TestProductionCode_Runner.c
SRC_FILES2=../src/unity.c src/ProductionCode2.c test/TestProductionCode2.c test/no_ruby/TestProductionCode2_Runner.c
INC_DIRS=-Isrc -I../src
SYMBOLS=-DTEST

all: test1 test2

test1:
	$(CC) $(INC_DIRS) $(SYMBOLS) $(SRC_FILES1) -o $(TARGET1)
	exec ./$(TARGET1)

test2:
	$(CC) $(INC_DIRS) $(SYMBOLS) $(SRC_FILES2) -o $(TARGET2)
	exec ./$(TARGET2)

clean:
	 rm -f $(TARGET1) $(TARGET2)
	
