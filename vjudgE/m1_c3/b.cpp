#include <bits/stdc++.h>

int main() {
    int x;
    scanf("%d",&x);
    while (x--)
    {
        long long y,z;
        scanf("%lld%lld",&y,&z);
        if (y-z<=0)
        {
            printf("0\n");
        } else {
            printf("%lld\n",y-z);
        }
        
    }
    
    return 0;
}