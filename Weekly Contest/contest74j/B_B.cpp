#include<bits/stdc++.h>

int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        /* code */
        long long n,m,k;
        scanf("%lld%lld%lld",&n,&m,&k);
        long long lD;
        for (int i = 0; i < n; i++)
        {
            /* code */
            long long num;
            scanf("%lld",&num);
            if (i==n-1)
            {
                /* code */
                lD=num;
            }
            
        }
        if (lD+k-1<=m)
        {
            /* code */
            printf("Yes\n");
        } else {
            printf("No\n");
        }
        
        
    }
    
    return 0;
}