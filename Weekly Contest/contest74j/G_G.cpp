#include<bits/stdc++.h>

int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        /* code */
        long long a,b;
        scanf("%lld%lld",&a,&b);
        long long x = ((abs(a-b))/10);
        long long y=x*10;
        if (y == abs(a-b))
        {
            printf("%lld\n",x);
        } else {
            printf("%lld\n", x+1);
        }
        
        // printf("%lld\n", +1);
    }
    
    return 0;
}