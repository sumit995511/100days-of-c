//Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>
int main ()
{
int selling_price , cost_price , gain , loss ;
printf("enter selling price\n");
scanf("%d",&selling_price);
printf("enter cost price\n");
scanf("%d" ,&cost_price);
if (selling_price > cost_price){
gain = selling_price - cost_price; printf("profit=%d",gain);}
else if (cost_price >selling_price){loss= cost_price - selling_price;
    printf("loss = %d" , loss);}
    else{printf("no loss and no gain");}
return 0;
}