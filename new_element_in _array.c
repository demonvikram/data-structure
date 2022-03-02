#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,*a;
    char z;
    printf("enter the size of array:");
    scanf("%d",&n);
    a=(int*)calloc(n,sizeof(int));
    if(a==NULL)
        printf("invalid");
    printf("enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&*(a+i));
    }
     int loc,key;
     printf("enter the location where to insert element:");
     scanf("%d",&loc);
     printf("enter the value:");
     scanf("%d",&key);
     n++;
     a=(int*)realloc(a,n*sizeof(int));
     for(i=n;i>=loc;i--){
     *(a+i)=*(a+(i-1));
    }
    a[loc-1]=key;
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(a+i));
    }
}
