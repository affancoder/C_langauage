#include<stdio.h>

int main()
{
    int n,i;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=10; i>=1; i--)
    {
        printf("%d\n",n * i);
    }
    return 0;
}