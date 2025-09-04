// C program to print 'n' numbers of fibinacci series

#include<stdio.h>
int main()
{
int i=1;
int a=1,b=2,c;
int n;
printf("Enter a number ");
scanf("%d", &n);
printf("  %d",a);
printf("  %d",b);
while(i<=n)
{
c=a+b;
printf("  %d",   c);
a=b;
b=c;
i++;
}
}



