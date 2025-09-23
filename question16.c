//Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>
int main ()
{int a , b , c ;
    printf("enter first numeber\n");
    scanf("%d", &a ); 
    printf("enter second number\n");
    scanf("%d",&b);
    printf("enter third number\n");
    scanf("%d",&c);
if(a>='b' && a>='c')
{printf("%d is largest",a);}
else if (b>='a' && b>='c')
{printf("%d is largest",b);}
else {printf("%d is largest",c);}
return 0;
}
