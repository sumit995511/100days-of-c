#include<stdio.h>
int main ()
{
int a , b  , c ;
printf("enter the value of a and b respecitively ");
scanf ("%d %d", &a ,&b );
c = a + b ;

printf ("sum of a and b  is %d\n" , c );
{
    c = a - b;
    printf ("difference of a and b is %d\n", c);
}
{
    c = a * b;
    printf ("product of a and b is %d\n", c);
}
{ 
    c = a / b ;
    printf ("quotient of a and b is %d\n", c);
}
return 0;
}
