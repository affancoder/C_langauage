#include <stdio.h>

void temp()
{
    float c;

    printf("\nEnter the temp: \n");
    scanf("%f", &c);

    float f = (1.8 * c + 32);

    printf("\n%f in fahrenheit\n", f);
}

int main()
{
    temp();
    temp();
    temp();
    temp();
}