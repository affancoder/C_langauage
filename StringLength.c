#include <stdio.h>

int main()
{
    char word[100];
    int i, length = 0;

    printf("Enter a string: ");
    gets(word);

    for (i = 0; word[i] != '\0'; i++)
    {
        length++;
    }
    printf("Length of word is %d", length);
    return 0;
}