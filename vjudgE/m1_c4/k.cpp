#include <bits/stdc++.h>

int main() {
    long long n;
    scanf("%lld",&n);
    long long stdCount=0;
    for (long long i = 1; i <= n; i++)
    {
        stdCount+=i;
    }
    long long norCount = 0;
    for (long long i = 0; i < n-1; i++)
    {
        long long num;
        scanf("%lld",&num);
        norCount+=num;
    }
    
    printf("%lld\n",(stdCount-norCount));
    return 0;
}