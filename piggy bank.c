#include<stdio.h>

int main()
{
    int num1,num2,num3,total;
    printf("enter the value of coin Rs.10\n");
    scanf("%d",&num1);
    printf("enter the value of coin Rs.5\n");
    scanf("%d",&num2);
    printf("enter the value of coin Rs.1\n");
    scanf("%d",&num3);
    total = num1+num2+num3;
    printf("total money in piggy bank is %d",total);
    return 0;
}