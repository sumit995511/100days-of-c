//Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:

#include<stdio.h>
int main ()
{
int num ;
printf("percentage\n");
scanf("%d", &num);
if (num>=90 && num<=100 )
{printf("Grade A");}
else if (num>=80 && num<=89)
{printf("GRADE B");}
else if (num>=70 && num<=79)
{printf("GRADE C");}
else if (num>=60 && num<=69)
{printf("GRADE D");}
else
{printf("GRADE F");}
return 0;
}