#include<stdio.h>

int main()
{
    int a,b;
    printf("enter the numbers\n");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping the values of a is %d and b is %d",a,b);
    return 0;

}