#include<stdio.h>
#include<conio.h>
#define V 7
int i,j,a,b,graph[V][V],visited[V];
void edge(int graph[V][V],int a,int b)
{
    graph[a][b]=1;

}
void display(int graph[V][V])
{
    for(i=0;i<V;i++)
    {
        for(j=0;j<V;j++)
        {
            printf("%d ",graph[i][j]);
        }
        printf("\n");
    }
}
void dfs(int i)
{
    printf("%d",i);
    visited[i]=1;
    for(j=0;j<V;j++)
    {
        if(!visited[j]&&graph[i][j]==1)
        {
            dfs(j);
        }
    }
}
void main()
{
    char ch;
    for(i=0;i<V;i++)
    {
        for(j=0;j<V;j++)
        {
             graph[i][j]=0;
        }
    }
    do{
        printf("\nenter the edges:\n");
        scanf("%d %d",&a,&b);
        edge(graph,a,b);
        printf("press y for new edge:");
        ch=getch();
    }while(ch=='y');
    printf("\n");
    display(graph);
    printf("\n");
    for(i=0;i<V;i++)
        visited[i]=0;
    dfs(0);
}
