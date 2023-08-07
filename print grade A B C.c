#include<stdio.h>

int main()
{
    int marks;
    printf("input marks: ");
    scanf("%d",&marks);

    if(marks>=30 && marks<=60)
    {
        printf("grade C");
    }
    else if(marks>=61 && marks<=80)
    {
        printf("grade B");
    }
    else if(marks>=81 && marks<=100)
    {
        printf("Grade A");
    }
    else
    {
        printf("wrong marks");
    }
    return 0;
}