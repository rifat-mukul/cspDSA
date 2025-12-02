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
            scanf("%d",&arr[i][j]);
        }
        
    }
    int r1,c1,r2,c2;
    scanf("%d%d%d%d",&r1,&c1,&r2,&c2);

    int count=0;
    for (int i = r1-1; i < r2; i++)
    {
        /* code */
        for (int j = c1-1; j < c2; j++)
        {
            /* code */
            count+=arr[i][j];
        }
        
    }

    printf("%d\n",count);
    
    
    return 0;
}