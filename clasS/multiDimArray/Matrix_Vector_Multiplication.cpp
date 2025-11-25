#include<bits/stdc++.h>

int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    int mtx[n][m], vtr[m][1];
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < m; j++)
        {
            /* code */
            scanf("%d",&mtx[i][j]);
        }
        
    }

    for (int k = 0; k < m; k++)
    {
        /* code */
        for (int h = 0; h < 1; h++)
        {
            /* code */
            scanf("%d",&vtr[k][h]);
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        int count=0;
        for (int l = 0; l < m; l++)
        {
            count+=(mtx[i][l] * vtr[l][0]);
        }

        printf("%d\n",count);
        
    }
    
    
    
    return 0;
}