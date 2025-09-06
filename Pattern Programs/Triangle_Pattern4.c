// C program to print pattern.

#include<stdio.h>
int main()
{
    int n, c=1;
    printf("Enter the value for n for pattern");
    scanf("  %d", &n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d   ",c++);   
        }
        printf("\n");   // for new line
    }
}
