# Travis example for Identifier created by Rafael Garibotti

GCCFLAGS = -g -Wall -Wfatal-errors 
ALL = identifier
GCC = gcc

all: $(ALL)

identifier: identifier.c
	$(GCC) $(GCCFLAGS) -o $@ $@.c

cov: identifier.c
	$(GCC) $(GCCFLAGS) -fprofile-arcs -ftest-coverage -o $@ identifier.c

clean:
	rm -fr $(ALL) *.o cov* *.dSYM *.gcda *.gcno *.gcov
sanitizer:
	$(C_COMPILER) -g -Wall -Wfatal-errors -fsanitize=address $(DIRS) $(SRC_FILES) -o $(TARGET)

valgrind:
	valgrind --leak-check=full --show-leak-kinds=all ./all_tests.out 

gcov:
	gcov aes.c
	gcov camellia.c
	gcov crypt.c
	gcov seed.c
	
test: all
	bash test
