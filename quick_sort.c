#include<stdio.h>
int partition(int[],int,int);
void quick(int[],int,int);
void main()
{
    int i,a[8]={12,34,53,122,1,5,678,789};
    printf("given array is:\n");
    for(i=0;i<8;i++)
    {
       printf("%d:",a[i]);
    }
    quick(a,0,7);
    printf("\narray after sorting:\n");
    for(i=0;i<8;i++)
    {
         printf("%d:",a[i]);
    }

}
void quick(int a[],int l,int u)
{
    int loc;
    if(l<u)
    {
        loc=partition(a,l,u);
        quick(a,l,loc-1);
        quick(a,loc+1,u);
    }
}
int partition(int a[],int l,int u)
{
    int pivot,start,end,temp;
    pivot=a[l];
    start=l;
    end=u;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
    temp=a[l];
    a[l]=a[end];
    a[end]=temp;
    return end;
}
