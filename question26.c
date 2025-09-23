//Write a program to print numbers from 1 to n.
#include<stdio.h>
int main ()
{
int a , b ; 
printf("enter the number");
scanf("%d",&a);
printf("print a number from 1 and  %d are :\n" , a );
for(b=1; b<=a ; b++ ) 
{printf("%d\n", b);}
return 0;
}