# Author: Rafael Garibotti

##### Compiler options #####
CC = gcc
CFLAGS = -c -Wall
C_COMPILER=gcc
ifeq ($(shell uname -s), Darwin)
C_COMPILER=clang
endif
##############################
ifeq ($(OS),Windows_NT)
  ifeq ($(shell uname -s),) # not in a bash-like shell
	CLEANUP = del /F /Q
	MKDIR = mkdir
  else # in a bash-like shell, like msys
	CLEANUP = rm -f
	MKDIR = mkdir -p
  endif
	TARGET_EXTENSION=.exe
else
	CLEANUP = rm -f
	MKDIR = mkdir -p
	TARGET_EXTENSION=.out
endif
##### Project specific libraries #####
SRC_FILES += $(wildcard src/*.c)
TEST_FILES += $(wildcard test/*.c)

##### FLAGS ########

CFLAGS = -Wall
CFLAGS += -Wextra
CFLAGS += -Wpointer-arith
CFLAGS += -Wcast-align
CFLAGS += -Wwrite-strings
CFLAGS += -Wswitch-default
CFLAGS += -Wunreachable-code
CFLAGS += -Winit-self
CFLAGS += -Wmissing-field-initializers
CFLAGS += -Wno-unknown-pragmas
CFLAGS += -Wstrict-prototypes
CFLAGS += -Wundef
CFLAGS += -Wold-style-definition
CFLAGS += -fprofile-arcs
CFLAGS += -ftest-coverage

#### SOURCE FILES #####

TARGET_BASE=tests
TARGET = $(TARGET_BASE)$(TARGET_EXTENSION)
SRC_FILES=\
  ../../src/unity.c \
  ../../extras/fixture/src/unity_fixture.c \
  src/aes.c \
  src/camellia.c \
  src/crypt.c \
  src/seed.c \
  test/main.c \
  test/test_runners/testrunner.c \
  test/test_runners/all_tests.c
DIRS=-Isrc -I../src -I../extras/fixture/src

##### General commands #####

#identifier: identifier.c
#	$(GCC) $(GCCFLAGS) -o $@ $@.c

#cov: identifier.c
#	$(GCC) $(GCCFLAGS) -fprofile-arcs -ftest-coverage -o $@ identifier.c

sanitizer:
	$(C_COMPILER) -g -Wall -Wfatal-errors -fsanitize=address $(DIRS) $(SRC_FILES) -o $(TARGET)

valgrind:
	valgrind --leak-check=full --show-leak-kinds=all ./all_tests.out 
	
compile:
	$(C_COMPILER) $(CFLAGS) $(DIRS) $(SRC_FILES) -o $(TARGET)
gcov:
	gcov -b aes.c
	gcov -b camellia.c
	gcov -b crypt.c
	gcov -b seed.c

run:
	- ./$(TARGET) -v

clean:
	rm -fr $(ALL) *.o cov* *.dSYM *.gcda *.gcno *.gcov
#all: app

#app: main.o aes.o camellia.o seed.o
#	$(CC) main.o aes.o camellia.o seed.o -o app
#	rm -rf *.o

#main.o: test/main.c
#	$(CC) $(CFLAGS) $^

#aes.o: src/aes.c
#	$(CC) $(CFLAGS) $^

#camellia.o: src/camellia.c
#	$(CC) $(CFLAGS) $^

#seed.o: src/seed.c
#	$(CC) $(CFLAGS) $^
