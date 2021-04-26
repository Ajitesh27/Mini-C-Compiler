#!/bin/bash
yacc -d ICG.y 
clear
lex -w ICG.l 
gcc -Wall -fno-stack-protector -g -w y.tab.c lex.yy.c -ll -o ICG
./ICG<test1.c
sleep 10
./ast.sh
sleep 15
./run_quad.sh

