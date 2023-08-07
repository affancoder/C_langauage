#include<stdio.h>

int main()
{
    int a, b,temp;
    printf("enter the number\n");
    scanf("%d %d",&a,&b);
    temp =a;
    a=b;
    b= temp;
    printf("the value is a is %d and b is %d",a,b);
    return 0;
}