# ==========================================
#   Unity Project - A Test Framework for C
#   Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
#   [Released under MIT License. Please refer to license.txt for details]
# ========================================== 

C_COMPILER=gcc
TARGET_BASE1=test1
TARGET_BASE2=test2
TARGET_EXTENSION=.out
TARGET1 = $(TARGET_BASE1)$(TARGET_EXTENSION)
TARGET2 = $(TARGET_BASE2)$(TARGET_EXTENSION)
SRC_FILES1=../src/unity.c src/ProductionCode.c  test/TestProductionCode.c  test/no_ruby/TestProductionCode_Runner.c
SRC_FILES2=../src/unity.c src/ProductionCode2.c test/TestProductionCode2.c test/no_ruby/TestProductionCode2_Runner.c
INC_DIRS=-Isrc -I../src
SYMBOLS=-DTEST

CLEANUP = rm -f build/*.o ; rm -f $(TARGET1) ; rm -f $(TARGET2)

all: clean default

default:
	$(C_COMPILER) $(INC_DIRS) $(SYMBOLS) $(SRC_FILES1) -o $(TARGET1)
	$(C_COMPILER) $(INC_DIRS) $(SYMBOLS) $(SRC_FILES2) -o $(TARGET2)
	$(TARGET1)
	$(TARGET2)

clean:
	$(CLEANUP)
	
