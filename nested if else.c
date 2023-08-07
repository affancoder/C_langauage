#include<stdio.h>

int main()
{
    int marks;
    printf("input marks: ");
    scanf("%d",&marks);

    if(marks>=30 && marks<=100)
    {
        printf("Pass");
    }
    else if(marks<30)
    {
        printf("fail");
    }
    else
    {
        printf("wrong marks");
    }
    return 0;
}