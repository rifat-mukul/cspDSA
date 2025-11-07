#include<bits/stdc++.h>


int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long y;
        scanf("%lld",&y);
        if (y==0)
        {
            printf("%d\n",1);
        } else {
            printf("%lld\n",y*3);
        }
        
    }
    
    return 0;
}
