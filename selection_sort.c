#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter the total no. of elements:");
    scanf("%d",&n);
    int a[n],i,j,temp,min;
    printf("enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
       min=i;
       for(j=i+1;j<n;j++)
       {
           if(a[j]<a[min])
           {
               min=j;
           }
       }
       if(min!=i)
       {
           temp=a[i];
           a[i]=a[min];
           a[min]=temp;
       }
    }
    printf("sorted array is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
