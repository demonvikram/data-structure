#include<stdio.h>
#define V 10
#define INF 9999
int g[V][V];
void flloyd(int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(g[i][j]==0){
                g[i][j]=INF;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
              g[i][j]=0;
        }
    }
for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(g[i][j]>g[i][k]+g[k][j])
                {
                    g[i][j]=g[i][k]+g[k][j];
                }
            }
        }
    }

}

void print(int l)
{
    int i,j,n=l;
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
        printf("%3d ",g[i][j]);
       }
       printf("\n");
    }
}
void add(int i,int j,int l)
{
    g[i][j]=l;
}
void main()
{
    int n,i,j;
    printf("enter the no.of vertices:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        g[i][j]=0;
    }
    add(0,1,3);
    add(0,4,-4);
    add(0,2,8);
    add(1,4,7);
    add(1,3,1);
    add(4,3,6);
    add(3,2,-5);
    add(2,1,4);
    add(3,0,2);
    flloyd(n);
    printf("\n");
    print(n);
}
