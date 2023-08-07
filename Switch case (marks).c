#include<stdio.h>

int main()
{
    int marks;

    printf("enter the marks\n");
    scanf("%d",&marks);

    printf("you have enter the marks %d\n",marks);

    switch(marks)

    {
    case 20:
        printf("you marks are 20\n");
        break;

    case 40:
        printf("you marks are 40\n");
        break;

    case 60:
        printf("you marks are 60\n");
        break;

    case 80:
        printf("you marks are 80\n");
        break;

    default:
        printf("you have not enter the marks 20,40,60 or 80\n");
        break;
    }

    return 0;

}