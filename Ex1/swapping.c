#include<stdio.h>
int main()
{
float a,b,c;
printf("Enter two numbers to be swapped");
scanf("%f%f", &a, &b);
c=a;
a=b;
b=c;
printf("Swapped values are = %f\n%f\n", a,b);
}
