#include<stdio.h>

void sum(void);

void main()
{
    sum();
}

void sum()
{
    int x=5, y=8, sum;
    sum=x+y;
    printf("sum is %d\n",sum);
}