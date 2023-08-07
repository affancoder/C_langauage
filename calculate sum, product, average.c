#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter any two number\n");
    scanf("%d %d",&x,&y);

    int sum=x+y;
    int product=x*y;
    int average=(x+y)/2;
    {
        printf("sum of x & y is %d\n",sum);
        printf("product of x & y is %d\n", product);
        printf("average of x & y is %d", average);
    }
    return 0;
}