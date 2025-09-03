#include<stdio.h>
int main()
{
int sal,gp,np;
printf("Enter Salary");
scanf("%d",&sal);

if(sal>=10000)
{
  gp=sal+((90*sal)/100)+((20*sal)/100);
  np=gp-1000;
  printf("Gross Pay is:%d",gp);
  printf("Net Pay is:%d",np);
}
else if((sal<10000)&&(sal>=5000))
{
  gp=sal+((80*sal)/100)+((15*sal)/100);
  np=gp-750;
  printf("Gross Pay is:%d",gp);
  printf("Net Pay is:%d",np);
}
else
{ 
  gp=sal+((70*sal)/100)+((10*sal)/100);
  np=gp-500;
  printf("Gross Pay is:%d",gp);
  printf("Net Pay is:%d",np);
}
}
