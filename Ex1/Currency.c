#include<stdio.h>
int main()
{
float amt;
 printf("Enter amount in USD\n");
scanf("%f", &amt);

float Rs = amt*87.45;
float Eur = amt*0.85;

printf("Amount in Rupees= %0.2f\n", Rs);
printf("Amount in Euro= %0.2f", Eur);
}
