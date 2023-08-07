#include<stdio.h>

void sub()
{
    int a, b, sub;
    printf("input numbers: ");
    scanf("%d %d",&a,&b);
    sub=a-b;
    printf("%d\n",sub);
}
int main()
{
    sub();
    sub();
}