#include <bits/stdc++.h>

int main() {
    long long t,n;
    int k;
    scanf("%lld",&t);
    while (t--)
    {
        scanf("%lld%d",&n,&k);
        // solit bill
        long long bill = n/(k+1);
        // calculate individual bill
        long long myBill = n - (bill * k);
        printf("%lld\n",myBill);
        
    }
    
    return 0;
}