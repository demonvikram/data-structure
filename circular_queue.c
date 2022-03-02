#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
void enqueue(void);
void dequeue(void);
void display(void);
int queue[CAPACITY],front=-1,rear=-1,ele;
void main()
{
    int i;
    while(1<2)
    {
        printf("enter your choice:\n1:enqueu\n2:dequeue\n3:display\n4:exit");
        scanf("%d",&i);
        switch(i)
        {
        case(1):
            {
                enqueue();
                break;
            }

        case(2):
            {
                dequeue();
                break;
            }
        case(3):
            {
                display();
                break;
            }
        case(4):
            {
                exit(1);
            }
        default:
            {
                printf("enter the valid choice\n");
            }
       }
    }
}
void enqueue()
{
    printf("enter the element:");
    scanf("%d",&ele);
    if(rear==-1&&front==-1)
    {
        front=rear=0;
        queue[rear]=ele;
    }
    else if((rear+1)%CAPACITY==front)
    {
        printf("queue is full\n");
    }
    else
    {
        rear=(rear+1)%CAPACITY;
        queue[rear]=ele;
    }
}
void display()
{
    int i=front;
    while(i!=rear)
    {
        printf("%d-->",queue[i]);
        i=(i+1)%CAPACITY;
    }
}
void dequeue()
{
    if(rear==-1&&front==-1)
    {
        printf("queue is empty\n");
    }
    else if(front==rear)
    {
        printf("%d has been deleted\n",queue[front]);
        front=rear=-1;
    }
    else
    {
        printf("%d has been deleted\n",queue[front]);
        front=(front+1)%CAPACITY;
    }
}
