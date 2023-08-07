#include<stdio.h>

int main()
{
    printf("Hello world\n");

    int marks[3];

    printf("input physics marks: ");
    scanf("%d",&marks[0]);

    printf("input chemistry marks: ");
    scanf("%d",&marks[1]);

    printf("input maths marks: ");
    scanf("%d",&marks[2]);

    printf("physics=%d, chem=%d, math=%d",marks[0],marks[1],marks[2]);
    return 0;
}