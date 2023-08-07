#include<stdio.h>

int main()
{
    int num,i;

    printf("enter the number you want to multiplication table of\n");
    scanf("%d",&num);

    printf("multiplication of %d is as follows:\n",num);

    for(i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);

    }


    return 0;

}