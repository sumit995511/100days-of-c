//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include<stdio.h>
int main ()
{
    int n, i ;
    int num =2 ; 
    int  deno=3;
    float sum=0;
printf("enter the terms\n");
scanf("%d", &n );
for(i=0 ; i <=n ; i++ ){
sum= sum+ (float)num/deno ;
num= num+2;
deno= deno+4;
}
printf("the sum of series is %f" ,sum);


return 0;
}