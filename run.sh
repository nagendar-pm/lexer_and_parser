#!/bin/bash
yacc -d -v parser.y
lex lexer.l
gcc -o a.out y.tab.c lex.yy.c -lfl -lm
./a.out < input.txt
