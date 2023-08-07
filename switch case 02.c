#include<stdio.h>

int main()
{
    int age;

    printf("enter the age\n");
    scanf("%d", &age);

    switch(age)
    {
    case 10:
        printf("the age is 10\n");
        break;
    case 20:
        printf("the age is 20\n");
        break;
    case 30:
        printf("the age is 30\n");
        break;

    default:
        printf("the age is not 10,20 or 30\n");
        break;
    }


    return 0;
}