#include<stdio.h>
#include<string.h>

struct structa{
    int a;
    int b[10],c;
}structb;

int main()
{
    int a;
    int b;
    a=2+3;
    struct structa local;
    local.a =5;
    b = a + 10/a;
    switch(a)
    {
    case 1:a++;
    break;
    case 2: a--;
    break;
    default: a=a+1;
    }

    while(a>0)
    { 
        a--;
    }
}