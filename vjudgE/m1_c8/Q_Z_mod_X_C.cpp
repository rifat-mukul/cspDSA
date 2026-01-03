#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        long long a,b,c;
        scanf("%lld%lld%lld",&a,&b,&c);
        printf("%lld %lld %lld\n", a+b+c, b+c, c);
    }
    
    return 0;
}