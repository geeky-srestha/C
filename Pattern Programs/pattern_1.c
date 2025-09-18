/*  to print this pattern
  1
    2
      3
        4
          5
            6 
*/




#include<stdio.h>
int main()
{
int n; 
printf("Enter the value of n");
scanf("%d", &n);

for(int i=1; i <=n; i ++)
{
 for(int k=1; k<=i; k++)
  {
    printf(" ");
  }
   for(int j=i; j <=i; j++)
    {
      printf("%d" , j);
    }
printf("\n");
}
}
