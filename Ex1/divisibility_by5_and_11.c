#include<stdio.h>
int main()
{
int n;
printf("Enter a number to check divisibility");
scanf("%d" , &n);
if((n%5==0)&&(n%11==0))
print("The Number is Divisible by both 11 and 5");
else
printf("The Number is not divisible");
}
