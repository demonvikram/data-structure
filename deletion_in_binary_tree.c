#include<stdio.h>
#include<stdlib.h>
void insert(void);
struct node{
int data;
struct node *left,*right;
};
void display(struct node*);
struct node* removeNode(struct node*,int val);
struct node *p,*curr,*parent,*root,*temp;
void main(){
    int i;
    while(1<2){
printf("\n enter the your choice:\n1:insert\n2:display\n3:delete\n4:exit");
scanf("%d",&i);
switch(i){
case(1):{
insert();
 break;
}
case(2):{
display(root);
break;
}
case(3):
    {
        int val;
        printf("enter the element:");
        scanf("%d",&val);
        removeNode(root,val);
    }
case(4):{
exit(1);
}
default:{
printf("enter the valid choice\n");
}
}
}
}
void insert(void)
{
    int ele;
    p=(struct node*)malloc(sizeof(struct node));
    printf("enter the element:");
    scanf("%d",&ele);
    p->data=ele;
    p->left=p->right=NULL;
    if(root==NULL)
        root=p;
    else{
        curr=root;
        while(curr!=NULL){
            parent=curr;
            if(ele>curr->data)
                curr=curr->right;
            else
                curr=curr->left;
        }
        if(ele>parent->data)
            parent->right=p;
        else
            parent->left=p;
    }
}
void display(struct node *node)
{
    if(node==NULL)
        return;
    else
    {
        display(node->left);
        printf("%d",node->data);
        display(node->right);
    }
}
struct node *removeNode(struct node *root, int val)
{
    if(root == NULL)
        return NULL;
    if(root->data < val)
        root->right = removeNode(root->right,val);

    else if(root->data > val)
        root->left = removeNode(root->left,val);
    else
    {
        if(root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }
        if(root->left == NULL || root->right==NULL)
        {
            temp =root->left?root->left:root->right;
            free(root);
            return temp;
        }
        if(root->left!=NULL && root->right!=NULL)
        {
            temp=root->right;
            while(temp->left!=NULL){
                temp=temp->left;
                root->data=temp->data;
                root->right=removeNode(root->right,root->data);
            }
        }
         return root;
    }
}
