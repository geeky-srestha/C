/* program to find the sum of first 'n' terms of the given series 
           1/1! + 2/2! + 3/3! + 4/4! + 5/5! + ..... */


#include<stdio.h>
int main()
{
int n; 
double sum=0, fact;
printf("Enter the value of n");
scanf("%d", &n);

for(int i=1; i <=n; i ++)
{
  fact=1;
  for(int j=1; j<=i ; j++)
   {
      fact= fact*j;
   }
 sum += (double)i/fact;
}
printf("Sum = %0.3f" , sum);
}
