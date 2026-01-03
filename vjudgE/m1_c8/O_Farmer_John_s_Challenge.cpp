#include<bits/stdc++.h>

int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        /* code */
        long long n,k;
        scanf("%lld%lld",&n,&k);
        if (n==k)
        {
            /* code */
            for (long long i = 0; i < n; i++)
            {
                /* code */
                printf("1 ");
            }
            printf("\n");
            
        } else if (k==1)
        {
            /* code */
            for (long long i = 1; i <=n; i++)
            {
                /* code */
                printf("%lld ",i);
            }
            printf("\n");
        } else {
            printf("-1\n");
        }
        
        
    }
    
    return 0;
}