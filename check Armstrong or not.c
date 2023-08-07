#include<stdio.h>

int main()
{
    int num,temp,rem,sum=0,c;
    printf("input number: ");
    scanf("%d",&num);

    temp=num;

    while(0<num)
    {
        rem=num%10;
        c=rem*rem*rem;
        sum=sum+c;
        num=num/10;
    }
    num=temp;
    if(num==sum)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("not a Armstrong number");
    }
    return 0;

}