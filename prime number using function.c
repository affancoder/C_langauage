#include<stdio.h>

void isprime()
{
    int n,i;
    printf("enter the number: ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d is not a prime number",n);
    }
    else
    {
        printf("%d is prime number",n);
    }
    for(i=2; i<=n; i++)
    {
        printf("%d",n);
    }
}
int main()
{
    isprime();
}