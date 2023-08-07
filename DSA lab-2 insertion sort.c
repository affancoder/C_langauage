#include<stdio.h>
void printarray(int array[],int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
}
void insertionsort(int array[],int size)
{
    for(int step=1; step<size; step++)
    {
        int key=array[step];
        int j=step-1;
        while(key<array[j] && j>=0)
        {
            array[j+1]=array[j];
            --j;
        }
        array[j+1]=key;
    }
}
int main()
{
    int data[]= {33,86,57,92,37,48,25,12};
    int size=sizeof(data)/sizeof(data[0]);
    insertionsort(data,size);
    printf("sorted array in ascending order: \n");
    printarray(data,size);
}