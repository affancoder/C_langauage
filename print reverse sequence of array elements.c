#include<stdio.h>

int main()
{
    int a[5];
    printf("Enter any elements\n");
    for(int i=0; i<=4; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reverse number of array\n");
    for(int i=4; i>=0; i--)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}