#include<stdio.h>
int main ()
{
int length , breadth , area , perimeter  ; 
printf ("enter the length and breadth\n");
scanf("%d %d", &length  , &breadth);
area = length * breadth ;
printf("area of rectangle is %d\n", area);
{
perimeter = 2 * (length + breadth);
printf ("perimeter of rectangle is %d\n", perimeter);    

}
return 0;
}