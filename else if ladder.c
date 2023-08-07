#include<stdio.h>

int main()
{
    int marks;
    printf("enter your marks\n");
    scanf("%d",&marks);
    if(marks>80)
        printf("A grade");
    else if(marks>70)
        printf("B grade");
    else if(marks>60)
        printf("C grade");
    else
        printf("You are fail");
    return 0;
}