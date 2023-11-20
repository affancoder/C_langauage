#include <stdio.h>

int main()
{
    int a, b, sum = 0;

    printf("Enter two number: \n");
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("The sum of a + b = %d", sum);

    return 0;
}