FLAGS=-Wall -Werror -Wextra -std=c11
CC=gcc $(FLAGS)
FILE=s21_decimal
FILETEST=tests/*
FILEREPORT=s21_test_report
FILETESTO=s21_test
DIRREPORT=report
LIB=$(FILE).a
COVFLAG=-fprofile-arcs -ftest-coverage

OS = $(shell uname)

ifeq ($(OS), Darwin)
	TESTFLAGS=-pthread -lm -lcheck
	OPEN_CMD=open
else
	TESTFLAGS=-pthread -lcheck_pic -lrt -lm -lsubunit
	OPEN_CMD=xdg-open
endif


all: clean $(FILE).a gcov_report

o_files:
	$(CC) -c *.c

$(FILE).a: o_files
	ar rcs $(LIB) *.o

test: clang $(FILE).a
	$(CC) $(FILETEST).c $(FILE).a -o $(FILETESTO) $(TESTFLAGS)
	./$(FILETESTO)
	make clean

gcov_report: $(FILE).a
	$(CC) $(COVFLAG) $(FILETEST).c *.c -o $(FILEREPORT) $(TESTFLAGS)
	./$(FILEREPORT)
	lcov -t "$(FILE)" -o test.info -c -d .  
	genhtml -o $(DIRREPORT) test.info
	$(OPEN_CMD) $(DIRREPORT)/index.html

rep: gcov_report

clean:
	rm -rf *.o *.a *.gcno *.gcda *.info $(DIRREPORT) $(FILETESTO) $(FILEREPORT)

#style
cpp:
	cppcheck --enable=all --suppress=missingIncludeSystem *.c *.h

clang:
	clang-format -style=Google -i *.c *.h */*.c */*.h

check: cpp clang

#install for OS
install_Linux:
	sudo apt update
	sudo apt install cppcheck
	sudo apt install clang-format
	sudo apt install check
	sudo apt install lcov
	sudo apt install gcovr
	sudo apt install libcppunit-subunit-dev
	sudo apt install pkg-config
	