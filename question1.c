#include<stdio.h>
void nat( int n);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    nat(n);
    return 0;
}

void nat(int n)
{
    if(n==0)
        return;
    nat(n-1);
    printf("%d\t",n);
}