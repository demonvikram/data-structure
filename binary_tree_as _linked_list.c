#include<stdio.h>
#include<stdlib.h>
void insert(void);
void search(void);
void del(void);
struct node
{
    int data;
    struct node *left,*right;
};
struct node *root=NULL,*p,*parent,*curr;
void inorder(struct node*);
void main()
{
    int j;
    while(1<2)
    {
       printf("\n1:insertion\n2:display\n3:search\n5:exit\n4:delete\n");
    scanf("%d",&j);
    switch(j)
    {
    case(1):
        {
            insert();
            break;
        }
    case(2):
        {
            inorder(root);
            break;
        }
    case(5):
        {
            exit(1);
        }
    case(3):
        {
            search();
            break;
        }
    case(4):
        {
            del();
            break;
        }
    }
    }
}
void insert()
{
    p=(struct node*)malloc(sizeof(struct node));
    printf("enter the element:");
    scanf("%d",&p->data);
    p->left=NULL;
    p->right=NULL;
    if(root==NULL)
           root=p;
    else
      {
        curr=root;
            while(curr!=NULL)
            {
                parent=curr;
                if(p->data>curr->data)
                    curr=curr->right;
                else
                    curr=curr->left;
            }
            if(p->data>parent->data)
                parent->right=p;
            else
                parent->left=p;
      }
}
void inorder(struct node *node)
{
    if(node==NULL)
        return ;
    else
    {
        inorder(node->left);
        printf("%d,",node->data);
        inorder(node->right);
    }
}
void search()
{
    int key;
    printf("enter the element:");
    scanf("%d",&key);
    curr=root;
    while(curr->data!=key)
    {
        if(key>curr->data)
        {
            curr=curr->right;
        }
        if(key<curr->data)
        {
            curr=curr->left;
        }
        if(curr->data==key)
        {
            printf("FOUND");
            break;
        }
    }
}
void del()
{
    int key;
    printf("enter the node to be deleted:");
    scanf("%d",&key);
    curr=root;
    while(curr->data!=key)
    {
        parent=curr;
        if(key>curr->data)
        {
            curr=curr->right;
        }
        if(key<curr->data)
        {
            curr=curr->left;
        }
    }
    if(curr->right==NULL && curr->left==NULL)
    {
        if(curr==parent->right)
      {
        parent->right=NULL;
      }
    else
      {
        parent->left=NULL;
      }
    }
    if(curr->left!=NULL ^ curr->right!=NULL)
    {
        if(curr->left!=NULL)
        {
            if(parent->right==curr)
            {
                parent->right=curr->left;
            }
            else
            {
                parent->left=curr->left;
            }
        }
        if(curr->right!=NULL)
        {
            if(parent->right==curr)
            {
                parent->right=curr->right;
            }
            else
            {
                parent->left=curr->right;
            }
        }
        /*curr->left=NULL;
        curr->right=NULL;*/

    }
    if(curr->right!=NULL && curr->left!=NULL){
        if(parent->left==curr){
            parent->left=curr->right;

        }
        if(parent->right==curr){
            parent->right=curr->right;
        }
    }
    free(curr);
}

