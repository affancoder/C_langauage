#include<stdio.h>

int main()
{
    int x;

    printf("enter the value of x\n");
    scanf("%d",&x);



    for(int i = 0 ; i < x ; i++)
    {
        for(int j = 0 ; j < x ; j++)
        {

            printf("*");
        }
        printf("\n");
    }

    return 0;
}