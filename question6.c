#include<stdio.h>
void even(int n);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    even(n);
    return 0;
}

void even(int n)
{
    if(n==0)
        return;
    if(n%2==0)
        printf("%d\t",n);
    even(n-1);
}