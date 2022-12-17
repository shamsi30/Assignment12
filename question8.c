#include<stdio.h>
void binr(int n);
int main()
{
    int n;
    printf("Enter a decimal number:");
    scanf("%d",&n);
    binr(n);
    return 0;
}

void binr(int n)
{
    if(n==0)
        return ;
    binr(n/2);
    printf("%d",n%2);
}