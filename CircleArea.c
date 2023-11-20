#include <stdio.h>

void area()
{
    int r;
    printf("\nEnter the radius: ");
    scanf("%d", &r);

    float area = 2 * 3.14 * r * r;
    printf("Area of Circle: %f", area);
}

int main()
{
    area();
    area();
    area();
}