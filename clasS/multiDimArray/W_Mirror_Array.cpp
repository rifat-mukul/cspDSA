#include<bits/stdc++.h>

int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < m; j++)
        {
            /* code */
            scanf("%lld",&arr[i][j]);
        }
        
    }

    for (int i = 0; i <n; i++)
    {
        /* code */
        for (int j = m-1; j>=0; j--)
        {
            /* code */
            printf("%lld ",arr[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}