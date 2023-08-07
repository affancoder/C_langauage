#include<stdio.h>

int main()
{
    float p,n,r,si;
    while(1)
    {
        printf("enter the number\n");
        scanf("%f %f %f",&p,&n,&r);
        si=p*n*r/100;
        printf("The simple interest is %f",si,p,n,r);
    }
    return 0;
}