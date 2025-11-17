#include <bits/stdc++.h>

int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        long long n;
        scanf("%lld",&n);
        long long count=0;
        for (int i = 0; i < n; i++)
        {
            long long num1;
            scanf("%lld",&num1);
            count+=num1;
        }
        // printf("%lld ",count);
        long long sq=sqrt(count);

        if (sq*sq==count)
        {
            /* code */
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        
    }
    
    return 0;
}