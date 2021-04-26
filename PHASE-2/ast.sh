#!/bin/bash

yacc -d AST.y
clear
lex -w AST.l
gcc -Wall -fno-stack-protector -g -w y.tab.c lex.yy.c graph.c -ll -o AST
./AST<test1.c