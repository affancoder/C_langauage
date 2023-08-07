#include<stdio.h>

void main()
{
    int A[20],n, i, j, x;
    printf("Enter the size of an Array: ");
    scanf("%d",&n);

    printf("Enter the elements in Array: \n");
    for(i=0; i<=n-1; i++)
    {
        scanf("%d",&A[i]);
    }
    for(j=n-2; j>=0; j--)
    {
        for(i=0; i<=j; i++)
        {
            if(A[i] > (i+1))
            {
                x=A[i];
                A[i]=A[i+1];
                A[i+1]=x;
            }
        }
    }
    printf("Array in reverse: ");
    for(i=0; i<=n-1; i++)
    {
        printf("%d\n",A[i]);
    }
}