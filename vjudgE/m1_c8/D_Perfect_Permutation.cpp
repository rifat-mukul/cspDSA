#include<bits/stdc++.h>

int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        /* code */
        long long n;
        scanf("%lld",&n);
        for (long long  i = 1; i <=n; i++)
        {
            /* code */
            if (i==n)
            {
                printf("%d ",1);

            } else {
                printf("%d ",i+1);
            }
            
            
        }
        printf("\n");
    }
     
    return 0;
}