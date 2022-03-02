#include<stdio.h>
void partition(int[],int,int);
void merge(int[],int,int,int);
void main()
{
    int i,a[8]={13,45,2,56,75,1234,890,653};
    printf("given array is:\n");
    for(i=0;i<8;i++)
    {
       printf("%d:",a[i]);
    }
    partition(a,0,7);
    printf("\nelements of sorted array:\n");
    for(i=0;i<8;i++)
    {
       printf("%d:",a[i]);
    }

}
void partition(int a[],int l,int u)
{
    int mid;
    if(l<u)
    {
        mid=(l+u)/2;
        partition(a,l,mid-1);
        partition(a,mid+1,u);
        merge(a,l,mid,u);
    }
}
void merge(int a[],int l,int mid,int u)
{
    int i,j,k,b[u+1];
    i=l;
    j=mid+1;
    k=l;
    while(i<=mid&&j<=u)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            k++;
            i++;
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    if(i>mid)
    {
        while(j<=u)
        {
            b[k]=a[j];
            k++;
            j++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }
    for(i=l;i<=u;i++)
    {
        a[i]=b[i];
    }
}
