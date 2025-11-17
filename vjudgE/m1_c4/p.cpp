#include <bits/stdc++.h>

int main() {
    long long n,l,r;
    scanf("%lld%lld%lld",&n,&l,&r);
    // long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        /* code */
        long long num;
        scanf("%lld",&num);
        // arr[i]=num;
        if (num<=l)
        {
            /* code */
            printf("%lld ",l);
        } else if (num>=r)
        {
            /* code */
            printf("%lld ",r);
        } else {
            printf("%lld ",num);
        }
        
        
    }
    
    return 0;
}