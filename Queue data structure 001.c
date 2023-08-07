#include<stdio.h>

void Enqueue(int A[],int Front,int *Rear)
{
    if(*Rear==-1)
        printf("overflow\n");
    else
    {
        (*Rear)++;
        printf("Enter the elements: \n");
        scanf("%d",&A[*Rear]);
    }
}
void Dequeue(int A[],int Front,int Rear)
{
    if(Front==Rear)
        printf("underflow\n");
    else
    {
        Front++;
        printf("Deleted Elements is %d\n",A[Front]);
    }
}
void Display(int A[],int Front,int Rear)
{
    if(Rear==Front)
        printf("underflow\n");
    else
    {
        for(int i=Front+i; i<=Rear; i++)
        {
            printf("%d",A[i]);
        }
    }
}
void main()
{
    do {
        int A[10],Front,Rear, choice;
        Rear-1;

        printf("\nEnter the size of Queue: \n");
        scanf("%d",&Rear);

        printf("Main Menu\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("0.Exit\n");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            Enqueue(A,&Front,&Rear);
            break;
        case 2:
            Dequeue(A,Front,&Rear);
            break;
        case 3:
            Display(A, Front,Rear);
            break;
        case 0:
            exit(0);
        default:
            printf("\ninvalid operation");
        }
    } while(1);
}