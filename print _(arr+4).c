#include<stdio.h>

int main()
{
    int arr[]= {1,2,3,4,5,6};

    printf("%d\n",*(arr+3));

    printf("%d",*(arr+5));

    return 0;
}