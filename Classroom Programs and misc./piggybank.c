#include<stdio.h>
int main()
{
int n10,n5,n2,n1,t;
printf("Enter 10, 5, 2, 1 Rupees Coins in PIGGY BANK");
scanf("%d%d%d%d", &n10, &n5, &n2 ,&n1);
t=(n10*10)+(n5*5)+(n2*2)+(n1*1);
printf("Total Amount in bank =%d", t);
}
