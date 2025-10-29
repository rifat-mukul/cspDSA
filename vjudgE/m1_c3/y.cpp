#include <bits/stdc++.h>

int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        int n,x,d;
        scanf("%d%d%d",&n,&x,&d);
        int rb= 5*x;
        int wf = n/rb;
        printf("%d\n",wf+d);
    }
    
    return 0;
}