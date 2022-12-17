#include<stdio.h>
void even(int n);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    even(n);
    return 0;
}

void even(int n)
{
    if(n==0)
        return ;
    even(n-1);
    if(n%2==0)
        printf("%d\t",n);
}