#include<stdio.h>
void main()
{
    int key,a[10]={445,785,848,936,978,1000,1296,1453,1500,3190};
    printf("enter the key element:");
    scanf("%d",&key);
    int i=0,j=9,mid,loc=0;
    while(i<=j)
    {
        mid=(i+j)/2;
        if(key<a[mid])
        {
            j=mid-1;
        }
        else if(key>a[mid])
        {
            i=mid+1;
        }
        else if(key==a[mid])
        {
            loc=mid;
            printf("found at %d",loc);
            break;
        }
    }
}
