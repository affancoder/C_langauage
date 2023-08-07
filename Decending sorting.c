#include<stdio.h>

int main()
{
    int a[20], number,i,x,k;
    printf("Enter the Size of Array: ");
    scanf("%d",&number);

    for(i=0; i<number; i++)
    {
        printf("Enter the Elements in Array: ");
        scanf("%d",&a[i]);
    }
    for(k=0; k<number; k++)
    {
        for(i=0; i<=number-1; i++)
        {
            if(a[i]<a[i+1])
            {
                x=a[i];
                a[i]=a[i+1];
                a[i+1]=x;
            }
        }
    }
    for(int j=0; j<number; j++)
    {
        printf("%d\t",a[j]);
    }
    return 0;
}