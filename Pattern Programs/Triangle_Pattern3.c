// C program to print pattern.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value for n for pattern");
    scanf("  %d", &n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",i);   // prints the repeted number 
        }
        printf("\n");   // for new line
    }
}
