#include<stdio.h>
#include<stdlib.h>
void create(void);
void del(void);
void display(void);
void append_beg(void);
void append_end(void);
int length(void);
void add(void);
void reverse(void);
struct node
{
    int data;
    struct node *link;
};
 struct node *root,*temp,*p,*r;
 int n,i,loc,len,l,j,k,m;
void main()
{
    int j;
    while(1<2)
    {
    printf("\n1:create linked list\n2:display\n3:delete element\n4:exit\n5:Append at begginning\n6:length\n7:Append at last\n8:Add\n9:reverse\n");
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
            del();
            break;
        }
    case(4):
        {
            exit(1);
        }
    case(5):
        {
            append_beg();
            break;
        }
    case(6):
        {
            len=length();
            printf("length of list is %d",len);
            break;
        }
    case(7):
        {
           append_end();
           break;
        }
    case(8):
        {
            add();
            break;
        }
    case(9):
        {
            reverse();
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
void append_beg(void)
{
    p=(struct node*)malloc(sizeof(struct node));
    printf("enter the element:");
    scanf("%d",&p->data);
    p->link=NULL;
    if(root==NULL)
    {
        root=p;
    }
    else{
        p->link=root;
        root=p;
    }
}
int length(void)
{
    len=1;
    temp=root;
    while((temp->link)!=NULL)
    {
        temp=temp->link;
        len++;
    }
    return len;
}
void append_end(void)
{
       p=(struct node*)malloc(sizeof(struct node));
            printf("enter the element:");
            scanf("%d",&p->data);
            p->link=NULL;
            if(root==NULL)
            {
                root=p;
            }
            else
            {
                temp=root;
                while(temp->link!=NULL)
                {
                    temp=temp->link;
                }
                temp->link=p;
            }
}
void add(void)
{
    int x;
    printf("enter the location:");
    scanf("%d",&x);
    len=length();
    if(x>len)
    printf("location is greater than original length of list\n");
    else
    {
    p=(struct node*)malloc(sizeof(struct node));
    printf("enter the element:");
    scanf("%d",&p->data);
    p->link=NULL;
    temp=root;
    for(i=1;i<x-1;i++)
    {
        temp=temp->link;
    }
    p->link=temp->link;
    temp->link=p;
    }
}
void reverse(void)
{
    len=length();
    l=0;
    j=len-1;
    r=temp=root;
    while(l<j)
    {
        k=0;
        while(k<j)
        {
            r=r->link;
            k++;
        }
        m=temp->data;
        temp->data=r->data;
        temp=temp->link;
        r->data=m;
        l++;
        j--;
        r=root;
    }
}
