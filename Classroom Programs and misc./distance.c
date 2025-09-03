#include<stdio.h>
#include<math.h>
int main()
{
int x1,x2,y1,y2;
printf("Enter X1, X2, Y1, Y2");
scanf("%d%d%d%d", &x1, &x2, &y1, &y2);
int d= sqrt(pow(x1-x2,2) + pow(y1-y2,2));
printf("Distance is = %d", d);
}
