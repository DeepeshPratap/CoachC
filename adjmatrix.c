#include<stdio.h>

int main()
{
    int adj[4][4];
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Is there a direct path from v[%d] to v[%d]?(Yes-1,No-0):",i+1,j+1);
            scanf("%d",&adj[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d",adj[i][j]);
        }
        printf("\n");
    }
    return 0;
}

