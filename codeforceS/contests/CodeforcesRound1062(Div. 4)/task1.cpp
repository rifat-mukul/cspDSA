#include <bits/stdc++.h>

int main() {
    long long x;
    scanf("%lld",&x);
    while (x--)
    {
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        int count = 0;
        if (a==b and b==c and c==d)
        {
            printf("YES\n");
        } else {
            printf("NO\n");
        }    
    }
    
    return 0;
}