#include<stdio.h>
void warshall(int adj[][4],int path[][4]);
int main()
{
    int adj[4][4],path[4][4];
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Is there a direct path from v[%d] to v[%d]?(Yes-1,No-0):",i+1,j+1);
            scanf("%d",&adj[i][j]);
        }
    }
    void warshall(adj,path);
    for(int i=0;i<4;i++);
    {
        for(int j=0;j<4;j++)
        {
            printf("%d",path[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void warshall(int adj[][4],int path[][4])
{
    int i,j,k;
    for(int i=0;i<4;i++);
    {
        for(int j=0;j<4;j++)
        {
            path[i][j]=adj[i][j];
        }
    }
    for(k=0;k<4;k++)
    {
        for(int i=0;i<4;i++);
        {
            for(int j=0;j<4;j++)
            {
                path[i][j]=path[i][j]||(path[i][k]&&path[k][j]);
            }
        }
    }
}
