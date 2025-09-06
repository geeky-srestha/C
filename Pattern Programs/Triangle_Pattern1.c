// C program to print triangle pattern

#include <stdio.h>
int main()
{
int n;
printf("Enter the value of n");
scanf("%d", &n);     // takes value of n form the user
for(int i=1;i<=n;i++)
{
  for(int j=1;j<=i;j++)
  {
    printf(" %d", j);
  }
  printf("\n");     // for new line(row)
}
}
