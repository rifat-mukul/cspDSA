#include<bits/stdc++.h>

int main() {
    long long t;
    scanf("%lld",&t);
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
        
        int border=n*m;
        if (border==1)
        {
            /* code */
            printf("%d\n",-1);
        } else {
            for (int i = 0; i < n; i++)
            {
                /* code */
                for (int j = 0; j < m; j++)
                {
                    if (arr[i][j]==border)
                    {
                        /* code */
                        printf("1 ");
                    } else {
                        printf("%d ",arr[i][j] + 1);
                    }
                    
                }
                printf("\n");
            }
            // printf("\n");
            
        }
        
    }
    
    return 0;
}