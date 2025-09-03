#include<stdio.h>
int main()
{
int qty1,qty2;
float price1, price2,tc;

printf("Enter quantity 1 and quantity 2\n");
scanf("%d%d", &qty1, &qty2);
printf("Enter price 1 and price 2\n");
scanf("%f%f", &price1, &price2);

tc=(qty1*price1)+(qty2*price2);
printf("Total Cost of Cart:\t=%f",tc);
}
