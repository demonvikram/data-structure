#include<stdio.h>
#include<stdlib.h>
void create(void);
void display(void);
void del(void);
void append_beg(void);
void append_end(void);
int length(void);
void add(void);
struct node{
    int data;
    struct node *left,*right;
};
struct node *p,*root,*temp,*prev,*next;
int n,i,loc,len=0;
void main()
{
    int j;
    while(1<2)
    {
      printf("1:create\n2:display\n3:exit\n4:delete\n5:append at beginning\n6:append at end\n7:length\n8:add\n");
    scanf("%d",&j);
    switch(j){
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
            append_beg();
            break;
        }
    case(6):
        {
            append_end();
            break;
        }
    case(7):
        {
            len=length();
            printf("length of list is %d",len);
            break;
        }
    case(8):
        {
            add();
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
    root=NULL;
    printf("enter the size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    p=(struct node*)malloc(sizeof(struct node));
    printf("enter the element:");
    scanf("%d",&p->data);
    p->left=NULL;
    p->right=NULL;
    if(root==NULL)
    {
        root=p;
        p->left=root;
        temp=p;
    }
    else{
        temp->right=p;
        p->left=temp;
        temp=p;
    }
    }
}
void display(void)
{
    temp=root;
    while(temp!=NULL)
    {
        printf("<--%d-->",temp->data);
        temp=temp->right;
    }
    printf("\n");
}
void del(void)
{
    printf("enter the location:");
    scanf("%d",&loc);
    temp=root;
    if(loc==1)
    {
        root=temp->right;
        temp->right->left=root;
        temp->right=NULL;
        temp->left=NULL;
    }
    else{
        for(i=1;i<=loc-1;i++)
    {
        prev=temp;
        temp=temp->right;
        next=temp->right;
    }
    prev->right=next;
    temp->right=NULL;
    next->left=prev;
    }
}
void append_beg(void)
{
    p=(struct node*)malloc(sizeof(struct node));
    printf("enter the elmement:");
    scanf("%d",&p->data);
    p->left=NULL;
    p->right=NULL;
    temp=root;
    p->right=temp->right;
    root=p;
    p->left=root;
}
void append_end(void)
{
    temp=root;
    p=(struct node*)malloc(sizeof(struct node));
    printf("enter the element:");
    scanf("%d",&p->data);
    p->right=NULL;
    p->left=NULL;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    temp->right=p;
    p->left=temp;
}
void add(void)
{
    p=(struct node*)malloc(sizeof(struct node));
    printf("enter the element:");
    scanf("%d",&p->data);
    p->right=NULL;
    p->left=NULL;
    printf("enter the location:");
    scanf("%d",&loc);
    if(loc>length())
    {
        printf("enter valid location\n");
    }
    else{
            temp=root;
        for(i=1;i<=loc-1;i++)
        {
            prev=temp;
            temp=temp->right;
        }
        p->right=temp;
        p->left=prev;
        prev->right=p;
        temp->left=p;
    }
}
int length(void)
{
    temp=root;
    while(temp!=NULL)
    {
        len++;
        temp=temp->right;
    }
    return len;
}

