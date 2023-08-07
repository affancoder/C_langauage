#include<stdio.h>

int main()
{
    int day;

    printf("input day: ");
    scanf("%d",&day);

    switch(day) {

    case 1:
        printf("Monday");
        break;

    case 2:
        printf("Tuesday");
        break;

    case 3:
        printf("Wednesday");
        break;

    case 4:
        printf("thrusday");
        break;

    case 5:
        printf("friday");
        break;

    case 6:
        printf("Saturday");
        break;

    case 7:
        printf("Sunday");
        break;

    default :
        printf("not a valid day");
        break;
    }

    return 0;
}