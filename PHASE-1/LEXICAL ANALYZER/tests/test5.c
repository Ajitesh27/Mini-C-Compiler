// test case to check function decleration ,struct and union decleration

#include<stdio.h>
struct student{
	int a;
	char c;
};
union teache{
	int q;
	int p;
};
void abc(){
	printf("\nHello World");
}
void main(){
	student *S;
	teacher *T;	
	abc();
}
