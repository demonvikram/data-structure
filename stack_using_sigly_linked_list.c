#include<stdio.h>
#include<stdlib.h>
void create(void);
void display(void);
void del(void);
void insert(void);
void comp_del(void);
struct node{
    int data;
    struct node *link;
};
struct node *top=NULL,*temp,*p;
int i,n,j;
void main()
{
    while(1<2)
    {
    printf("\n1:create\n2:display\n3:exit\n4:delete\n5:insert\n6:completely delete\n");
    scanf("%d",&j);
    switch(j)
    {
    case(1):
        {
            create();
            break;
        }
    case(2):
        {
            display();
            break;
        }
        case(3):
            {
                exit(1);
            }
        case(4):
            {
                del();
                break;
            }
        case(5):
            {
                insert();
                break;
            }
        case(6):
            {
                comp_del();
                break;
            }
        default:
            {
                printf("enter the valid argument\n");
            }
    }
    }
}
void create(void)
{
    printf("enter the size of stack:");
    scanf("%d",&n);
    i=0;
    printf("enter the elements:\n");
    while(i<n)
    {
        p=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->link=NULL;
        if(top==NULL)
        {
            top=p;
        }
        else
        {
            p->link=top;
            top=p;
        }
        i++;
    }
}
void display(void)
{
    if(top==NULL)
        printf("stack is empty\n");
    else{
            temp=top;
            printf("\n");
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }
        }
}
void del(void)
{
    if(top==NULL)
        printf("stack is empty\n");
    else
    {
        printf("%d is deleted from stack",top->data);
    temp=top;
    top=top->link;
    temp->link=NULL;
    }
}
void insert(void)
{
    printf("enter the element:");
    p=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&p->data);
    p->link=top;
    top=p;
}
void comp_del(void)
{
    top=NULL;
}
