#include <stdio.h>

int main()
{
    char str[] = "noor";
    char reverse[100]; // Assuming maximum length of string is 100
    int length = 0;
    int i, j = 0;

    // Calculate the length of the string manually
    while (str[length] != '\0')
    {
        length++;
    }

    for (i = length - 1; i >= 0; i--)
    {
        reverse[j++] = str[i];
    }
    reverse[j] = '\0'; // Null terminate the string

    printf("%s\n", reverse);

    return 0;
}