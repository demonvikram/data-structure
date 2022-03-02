#include<stdio.h>
#include<stdlib.h>
void enqueue(void);
void dequeue(void);
void display(void);
struct node
{
    int data;
    struct node *link;
};
struct node *front,*rear,*temp,*p;
void main()
{
    front=NULL;
    rear=NULL;
     int j;
    while(1<2)
    {
     printf("\n1:enqueue\n2:display\n3:dequeue\n4:exit\n");
     scanf("%d",&j);
     switch(j)
     {
     case(1):
        {
            enqueue();
            break;
        }
     case(4):
        {
            exit(1);
        }
     case(2):
        {
            display();
            break;
        }
     case(3):
        {
            dequeue();
            break;
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
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the element:");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(front==NULL && rear==NULL)
    {
        front=rear=temp;
    }
    else
    {
        rear->link=temp;
        rear=temp;
    }
}
void display()
{
    p=front;
    while(p!=NULL)
    {
        printf("%d-->",p->data);
        p=p->link;
    }
}
void dequeue()
{
    p=front;
    front=front->link;
    p->link=NULL;
    printf("%d has been deleted\n",p->data);
    free(p);
}
