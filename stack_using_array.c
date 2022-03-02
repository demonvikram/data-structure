#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 10
void push(void);
void pop(void);
void display(void);
int stack[CAPACITY],top=-1,i,n,x,a,d;
void main()
{
    printf("enter the size of stack:\n");
    scanf("%d",&n);
    while(1<2)
    {
    printf("1:push\n2:pop\n3:display\n4:exit\n");
    scanf("%d",&d);
    switch(d)
    {
    case(1):
        {
            push();
            break;
        }
    case(2):
        {
            pop();
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
            printf("enter the valid argument\n");
        }
    }
    }
}
void push(void)
{
    if(top==(n-1))
    {
        printf("stack is overflown\n");
    }
    else
    {
    top++;
    printf("enter the element:\n");
    scanf("%d",&x);
    stack[top]=x;
    }

}
void pop(void)
{
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("%d has been deleted from stack\n",stack[top]);
         top--;
    }
}
void display(void)
{
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
         for(i=0;i<=top;i++)
    {
        printf("%d\n",stack[i]);
    }
    }

}
