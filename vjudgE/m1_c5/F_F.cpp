#include<bits/stdc++.h>

int main() {
    long long x;
    scanf("%lld",&x);
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            scanf("%lld",&arr[i][j]);
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        bool flag=true;
        for (int j = 0; j < n; j++)
        {
            /* code */
            if (arr[j][i]==x)
            {
                /* code */
                printf("YES\n");
                flag=false;
                break;
            }
            
        }
        if (flag)
        {
            printf("NO\n");
        }
        
        
    }
    
    
    return 0;
}