#include<stdio.h>
void rev(int);
int main()
{
    int n;
    printf("Enter a minimum two digits number:");
    scanf("%d",&n);
    rev(n);
    return 0;
}

void rev(int n)
{
    if(n==0)
        return ;
    printf("%d",n%10);
    rev(n/10);
   
}