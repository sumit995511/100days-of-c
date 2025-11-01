//Write a program to check if a number is a perfect number.
#include<stdio.h>
int main ()
{
int a , b=0; 
printf("enter a number");
scanf("%d" , &a);
 for (int i=1 ; i<=a/2 ; i++) 
 {if ( a % i ==0) { b=b+i;}
}
if (b==a) {printf("this is a perfect number");}
else{printf("it is not a perfect number");}
return 0;
}