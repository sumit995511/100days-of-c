//Write a program to swap the first and last digit of a number.
#include<stdio.h>
int main ()
{
int a ,b , temp , last , first , count=0 , change ;

printf("enter the number ");
scanf("%d",&a);
temp=a;
last=temp%10 ;
while (temp>=10){
    temp=temp/10;
    count++ ;
} count=first; 



return 0;
}