#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int n,m;
        scanf("%d%d",&n,&m);
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            /* code */
            for (int j = 0; j < m; j++)
            {
                /* code */
                scanf("%d",&arr[i][j]);
            }
            
        }
        int row=0,col=0;
        if (m>1)
        {
            for (int i = 0; i < n; i++)
            {
                /* code */
                for (int j = 0; j < m-1; j++)
                {
                    /* code */
                    if (arr[i][j]==arr[i][j+1])
                    {
                        /* code */
                        arr[i][j+1]=0;
                    } else if (arr[i][j]!=arr[i][j+1])
                    {
                        arr[i][j+1]=1;
                    }
    
                }
                row+=arr[i][m-1];
                
            }
        }
        
        

        if (n>1)
        {
            for (int i = 0; i < n-1; i++)
            {
                /* code */
                for (int j = 0; j < m-1; j++)
                {
                    /* code */
                    if (arr[j][i]==arr[j+1][i])
                    {
                        /* code */
                        arr[j+1][i]=0;
                    } else if (arr[j][i]!=arr[j+1][i])
                    {
                        arr[j+1][i]=1;
                    }
    
                }
                col+=arr[m-1][i];
                
            }
        }
        
        if (row>=col)
        {
            printf("%d\n",row);
        } else {
            printf("%d\n",col);
        }
        
        
        
    }
    
    return 0;
}