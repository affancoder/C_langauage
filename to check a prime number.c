#include<stdio.h>

int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("prime number = %d",n);
    }
    else
    {
        printf("not a prime number = %d",n);
    }
    return 0;
}

