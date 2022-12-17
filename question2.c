#include<stdio.h>
void nat(int n);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    nat(n);
    return 0;
}

void nat(int n)
{
    if(n==0)
        return;
    printf("%d\t",n);
    nat(n-1);
}