#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter the total no. of elements:");
    scanf("%d",&n);
    int a[n],i,j,k,temp;
    printf("enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sorted array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
