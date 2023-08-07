#include<stdio.h>

int main()
{
    int i,a[10];
    printf("Enter any elements\n");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reverse of array elements\n");

    for(i=9; i>=0; i--)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}