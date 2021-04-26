#!/bin/bash

lex icg_quad.l
clear
yacc icg_quad.y -Wcounterexamples
clear
gcc y.tab.c -ll -w
./a.out
printf "\n\n"
python3 codeopt.py
