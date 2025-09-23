//Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit
#include<stdio.h>
int main ()
{
int bill , unit ;
printf("enter units\n");
scanf("%d", &unit);
if (unit>=1 && unit<=100)
{bill=unit*5;
printf("total bill = %d",bill);}
else if (unit>=101 && unit<=200)
{bill=(100*5)+7*(unit-100);
printf("total bill = %d", bill);}
else if(unit>=201 && unit<=300){bill = (100*5)+(100*7)+10*(unit-200);
    printf("total bill = %d",bill);
}
else if (unit>300)
{bill=(100*5)+ (100*7)+(100*10)+12*(unit-300);
printf("total bill = %d",bill);}
else {
        bill = 0; 
    

    printf("Total bill = ₹%d\n", bill);
}return 0;
}