#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,loc,key,*a;
    printf("enter the size of array:");
    scanf("%d",&n);
    a=(int*)calloc(n,sizeof(int));
    printf("enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&*(a+i));
    }
    printf("enter the element to be deleted");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
        loc=i;
        break;
        }
    }
    for(i=loc;i<n-1;i++)
    {
        *(a+i)=*(a+(i+1));
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d\n",*(a+i));
    }
}
