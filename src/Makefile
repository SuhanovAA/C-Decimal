FLAGS=-Wall -Werror -Wextra -std=c11
CC=gcc $(FLAGS)

FILE=s21_decimal
LIB=$(FILE).a

OS = $(shell uname)

ifeq ($(OS), Darwin)
	TESTFLAGS=-pthread -lm -lcheck
	OPEN_CMD=open
else
	TESTFLAGS=-pthread -lcheck_pic -lrt -lm -lsubunit
	OPEN_CMD=xdg-open
endif

all: clean $(FILE).a

o_files:
	$(CC) -c *.c

lcov:
	brew install lcov

#style
cpp:
	cppcheck --enable=all --suppress=missingIncludeSystem *.c *.h

clang:
	cp ../materials/linters/.clang-format .clang-format
	clang-format -n *.c *.h
	clang-format -i *.c *.h 
	rm -rf .clang-format

check: cpp clang