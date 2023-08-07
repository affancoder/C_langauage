#include<stdio.h>

int main()
{   int marks[2][3],total;

    marks[0][0]=89;
    marks[0][1]=78;
    marks[0][2]=67;

    marks[1][0]=89;
    marks[1][1]=78;
    marks[1][2]=67;

    //printf("%d",marks[0][0]);

    total = marks[0][0] + marks[0][1];

    printf("%d",total);

    return 0;
}