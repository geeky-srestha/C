#include<stdio.h>
int main()
{
int a;
float b;
char c;
double d;

printf("Enter Integer,float,character,double");
scanf("%d %f %c %lf", &a, &b, &c, &d);

printf("The different data type values are = %d\n %f\n %c\n %lf\n" , a, b, c, d);
}
