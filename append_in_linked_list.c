#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node{
        int data;
        struct node *link;
    };
    struct node *temp,*p,*root;
    root=NULL;
    while(1>2){
    p=(struct node*)malloc(sizeof(struct node));
    printf("enter the the element:");
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
        free(temp);
    }
    }
}
