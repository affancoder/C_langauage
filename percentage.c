#include<stdio.h>

int main()
{
    float a, b,total, percentage;
    printf("enter your maths & sci subject marks:\n");
    scanf("%f %f",&a,&b);
    {
        total=a+b;
    }
    printf("sum of marks of both subjects is %f\n",total);
    {
        percentage = (total/200)*100;
    }
    {
        printf("your percentage is %f",percentage);
    }
    return 0;
}