#include <stdio.h>

void smallest()
{
    int j, k, l;

    printf("\nEnter any three numbers: ");
    scanf("%d\n %d\n %d", &j, &k, &l);

    if (j < k && j < l)
    {
        printf("%d is smallest", j);
    }
    else if (k < j && k < l)
    {
        printf("%d is smallest", k);
    }
    else if (l < j && l < j)
    {
        printf("%d is smallest", l);
    }
}

int main()
{
    smallest();
    smallest();
}
