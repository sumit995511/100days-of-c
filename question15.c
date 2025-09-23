//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include<stdio.h>
int main ()
{
char num ;
printf("enter\n");
scanf("%c", &num);
if(num >= 'A' && num <='Z')
{printf("upercase");}
else if (num>='a' && num<='z')
{printf("lowercase");}
else if (num>='0' && num<='9')
{printf("digits");}
else {printf("special character");}
return 0;
}