#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,r1,r2,d,rp,ip;
printf("Enter the values of a b c:");
scanf("%f %f %f",&a ,&b ,&c);
d=b*b-4*a*c;
if(d>0)
{
  r1= -b+sqrt(d)/(2*a);
  r2= -b-sqrt(d)/(2*a);
printf("THe real roots = %f%f", r1, r2);
}
else if(d==0)
{
  r1=-b/(2*a);
  r2=-b/(2*a);
 printf("Roots are Equal= %f%f",r1,r2);
}

else
{
  rp=-b/(2*a);
  ip=(sqrt(-d)/(2*a));
  printf("Roots are immaginary=%f%f",rp, ip);
}
}


