#include<stdio.h>
#include<math.h>
int main()
{
float F,C,C1;
float F1;
printf("Enter Temperature in Celsius");
scanf("%f", &C);
F=((5/9.0)* (C+32));
printf("Temperature in Farehneit is : %0.3f\n", F);
printf("Enter Temperature in Farenheit");
scanf("%f", &F1);
C1=((9/5.0)*(F-32));
printf("Temperature in Celsius is : %0.3f", C1);
}
