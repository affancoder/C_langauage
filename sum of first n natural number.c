#include<stdio.h>

int main()
{
    int n, i,sum=0;

    printf("input number: ");
    scanf("%d",&n);

    for(i=0; i<=n; i++)
    {
        sum=n+i;
    }
    printf("sum of first natural number is %d",sum);
    return 0;
}