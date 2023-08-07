#include<stdio.h>

void sum()
{
    int a, b, sum;
    printf("input numbers: ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("Sum of a and b is %d\n",sum);
}
void main()
{
    sum();
    sum();
}