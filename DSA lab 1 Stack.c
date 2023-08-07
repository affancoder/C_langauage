
#include<stdio.h>
#include<stdlib.h>
#define maxsize 10
void push();
int pop();
void display();
int stack[maxsize];
int top=-1;
int main()
{
    int ch;
    do
    {
        printf("1. Push\n 2. Pop\n 3. Display\n 4. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch(ch)
        {
        case 1:
            push();
            break;
        case 2:
            printf("The deleted item is %d", pop());
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong choice!");
        }
        printf("Do you wish to continue?(y/n)");
        fflush(stdin);
        scanf("%c",&ch);
    }
    while(ch=='y' || ch=='Y');
}
void push()
{
    int item;
    if(top==maxsize -1)
    {
        printf("Stack is FULL");
        exit(0);
    }
    else
    {
        printf("Enter the element to be inserted:");
        scanf("%d", &item);
        top=top+1;
        stack[top]=item;
    }
}
int pop()
{
    int item;
    if(top==-1)
    {
        printf("Underflow: Stack is EMPTY!");
        exit(0);
    }
    else
    {
        item=stack[top];
        top=top-1;
    }
    return (item);
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("The stack is EMPTY.");
        exit(0);
    }
    else
    {
        for(i=top; i>=0; i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}