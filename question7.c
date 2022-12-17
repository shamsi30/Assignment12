#include<stdio.h>
void squar(int n);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    squar(n);
    return 0;
}

void squar(int n)
{
    if(n==0)
        return;
    squar(n-1);
    printf("%d\t",n*n);
}