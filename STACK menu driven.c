#include<stdio.h>

void push(int A[],int *Top,int Size)
{
    if(*Top==Size-1)
        printf("overflow\n");
    else
    {
        (*Top)++;
        printf("Enter the elements: \n");
        scanf("%d",&A[*Top]);
    }
}
void pop(int A[],int *Top)
{
    if(*Top==-1)
        printf("overflow\n");
    else
    {
        printf("Deleted Elements is %d: \n",A[*Top]);
        (*Top)--;
    }
}
void display(int A[],int Top)
{
    if(Top==-1)
    {
        printf("underflow\n");
    }
    else
    {
        for(int i=Top; i>=0; i--)
        {
            printf("%d",A[i]);
        }
    }
}
void main()
{
    do {
        int A[10],Top, Size, choice;
        Top-1;

        printf("\nEnter the Size of STACK: \n");
        scanf("%d",&Size);

        printf("Main Menu\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("0.Exit\n");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            push(A,&Top,Size);
            break;
        case 2:
            pop(A,&Top);
            break;
        case 3:
            display(A,Top);
            break;
        case 0:
            exit(0);
        }
    } while(1);
}