#include <bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        long long slice;
        scanf("%lld",&slice);
        long long h=0,a=0,nx=0;
        nx=slice-2;
        while (slice>2)
        {
            /* code */
            h++;
            slice-=2;
        }
        printf("%lld\n",h);

    }
    
    return 0;
}