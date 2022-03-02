#include<stdio.h>
void main()
{
    int key,i,loc=0,a[10]={11,52,96,347,145,98,752,025,111,1000};
    printf("enter the key element:");
    scanf("%d",&key);
    for(i=0;i<10;i++)
    {
        if(a[i]==key)
        {
            loc=i;
        }
    }
    if(loc==0)
        printf("given element is not found\n");
    else
        printf("element is found at location %d",loc+1);

}
