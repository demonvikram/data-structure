#include<stdio.h>
#include<stdlib.h>
void add(void);
void del(void);
void display(void);
void append(void);
struct node
{
    int data;
    struct node *link;
};
 struct node *root,*temp,*p,*r;
 int n,i,loc;
void main()
{
    int j;
    while(1<2)
    {
    printf("\n1:create linked list\n2:display\n3:delete element\n4:exit\n5:Append\n");
    scanf("%d",&j);
    switch(j)
    {
    case(1):
        {
            add();
            break;
        }
    case(2):
        {
            display();
            break;
        }
    case(3):
        {
            del();
            break;
        }
    case(4):
        {
            exit(1);
        }
    case(5):
        {
            append();
            break;
        }
    default:
        {
            printf("enter the valid argument\n");
        }
    }
    }
}
void add(void)
{
    printf("enter the no.of elements:");
    scanf("%d",&n);
    root=NULL;
    for(i=0;i<n;i++)
    {
        p=(struct node*)malloc(sizeof(struct node));
        printf("enter the element:");
        scanf("%d",&p->data);
        p->link=NULL;
        if(root==NULL)
        {
            root=p;
            temp=p;
        }
        else{
            temp->link=p;
            temp=p;
        }
    }
}
void display(void)
{
    temp=root;
    if(temp==NULL)
        printf("list is empty\n");
    else
        {
           while(temp!=NULL)
          {
            printf("%d-->",temp->data);
            temp=temp->link;
           }
    }
}
void del(void)
{
    temp=root;
    if(root==NULL)
        printf("list is empty\n");
    else
    {
    printf("\nenter the location where you want to delete:");
    scanf("%d",&loc);
    if(loc==1)
       {
        root=temp->link;
        temp->link=NULL;
       }
       else{
    for(i=1;i<=loc-1;i++)
    {
        r=temp;
        temp=temp->link;
    }
    r->link=temp->link;
    temp->link=NULL;
    }
    }
}
void append(void)
{
    p=(struct node*)malloc(sizeof(struct node));
    printf("enter the element:");
    scanf("%d",&p->data);
    p->link=NULL;
    temp=root;
    while(temp->link!=NULL);
    {
        temp=temp->link;
    }
    temp->link=p;
}
