#include<stdio.h>
void octal(int);
int main()
{
    int n;
    printf("Enter a decimal number:");
    scanf("%d",&n);
    printf("Octal equivalent of %d num is ",n);
    octal(n);
    return 0;
}

void octal(int n)
{
    if(n==0)
        return ;
    octal(n/8);
    printf("%d",n%8);
}