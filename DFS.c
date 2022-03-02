#include<stdio.h>
#include<conio.h>
#define V 7
int i,j,a,z=0,k,b,graph[V][V],visited[V],queue[V];
void edge(int graph[V][V],int a,int b)
{
    graph[a][b]=1;
    graph[b][a]=1;

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
void bfs(int i)
{
    int rear=0,front=0;
    queue[rear]=i;
    visited[i]=1;
    while(rear!=-1)
    {
        i=queue[front];
        printf("%d",queue[front]);
        for(k=0;k<rear;k++)
            queue[k]=queue[k+1];
        rear--;
        for(j=0;j<V;j++)
        {
            if(!visited[j]&&graph[i][j]==1){
                rear+=1;
                queue[rear]=j;
                visited[j]=1;
            }
        }
    }
}
void main()
{
    for(i=0;i<V;i++)
    {
        for(j=0;j<V;j++)
        {
             graph[i][j]=0;
        }
    }
    edge(graph,0,1);
    edge(graph,0,3);
    edge(graph,1,2);
    edge(graph,2,3);
    edge(graph,2,6);
    edge(graph,3,4);
    edge(graph,4,5);
    edge(graph,5,6);
    printf("\n");
    display(graph);
    printf("\n");
    for(i=0;i<V;i++)
        visited[i]=0;
    bfs(0);
}
