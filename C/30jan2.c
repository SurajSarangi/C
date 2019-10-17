#include <stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int rear = -1;
int front = -1;
void del();
void insert();
void disp();

void main()
{
    int choice;
    while (1)
    {
        printf(" Choose an operation :-\n");
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;

            case 2:
            del();
            break;

            case 3:
            disp();
            break;

            case 4:
            exit(1);
        }
    }
}

void insert()
{
    int a;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front==-1)
            front= 0;
        printf("Insert the element in queue : ");
        scanf("%d", &a);
        queue[++rear] = a;
    }
}

void del()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue[front++]);
    }
}
 
void disp()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i=front;i<=rear;i++)
            printf("%d->", queue[i]);
        printf("\n");
    }
}
