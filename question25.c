//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include<stdio.h>
int main ()
{
int a , b ;
char op;

printf("first number\n");
scanf("%d",&a);
printf("choose a operator (+,-,*,/,%%)\n");
scanf(" %c",&op);
printf("second number\n");
scanf("%d",&b);
switch(op) {
    case '+': printf("answer =%d" , a + b); break;
    case '-': printf("answer =%d" , a - b); break;
    case '*': printf("answer =%d" , a * b); break;
    case '%': printf("answer =%d" , a % b); break;
    case '/': printf("answer =%d" , a / b); break;
    default : printf("not valid");}
return 0;
}