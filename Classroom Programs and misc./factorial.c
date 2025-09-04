#include<stdio.h>
int main()
{
int n, facto=1;
printf("Enter a Number");
scanf("%d", &n);
 
while(n>=1)
{
facto=facto*n;
--n;
}
printf("Factorial of the given number is: %d", facto);
}

