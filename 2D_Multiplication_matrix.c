#include<stdio.h>

int main()
{
    int a[10][10],b[10][10],c[10][10];
    int r1, c1, r2, c2,i,j,k,sum;

    printf("Input Row & Column of first matrix: ");
    scanf("%d%d",&r1,&c1);

    printf("\nInput Row & Column of second matrix: ");
    scanf("%d%d",&r2,&c2);

    if(c1!=r2)
    {
        printf("\n Matrices are not multiplicable");
    }

    printf("\nEnter the Elements of Matrix A: \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            scanf("%d\n",&a[i][j]);
        }
    }
    printf("\nEnter the Elements of Matrix B: \n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            scanf("%d\n",&b[i][j]);
        }
    }
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            sum = 0;
            for(k=0; k<c1; k++)
            {
                sum = sum + a[i][k]*b[j][k];
                c[i][j] = sum;
            }
        }
    }
    printf("\n Product of Matrix:\n");
    printf("\nMatrix C: ");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d\t",c[i][j]);
        }
    }
    printf("\n");
    return 0;
}