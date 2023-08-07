#include<stdio.h>

int main()
{
    int i,sum=0;
    for(i=5; i<=50; i++) {
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}