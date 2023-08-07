#include<stdio.h>

int main()
{
    int a, b, temporary;

    printf("Enter any two number\n");
    scanf("%d %d",&a,&b);
    {
        temporary = a;
        a=b;
        b=temporary;
    }
    printf("value of a is %d & b is %d",a,b);
    return 0;
}