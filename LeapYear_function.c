#include <stdio.h>

void leap()
{
    int year;

    printf("\nEnter any year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("%d is leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }
}

int main()
{
    leap();
    leap();
    leap();
    leap();
    leap();
}