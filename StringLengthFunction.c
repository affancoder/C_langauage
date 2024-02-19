#include <stdio.h>
void str()
{
    char str[300];
    int i, length = 0;

    printf("\nInput a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    printf("Length of a string is %d\n", length);
}
int main()
{
    str();
    str();
    str();
}