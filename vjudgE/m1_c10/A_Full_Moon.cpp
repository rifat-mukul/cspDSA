#include<bits/stdc++.h>

int main() {
    long long n,m,p;
    scanf("%lld%lld%lld",&n,&m,&p);
    long long day=0, fm=0;
    for (int i = 0; ; i++)
    {
        /* code */
        day=m + (i * p);
        if (day > n)
        {
            /* code */
            break;
        } else {
            fm++;
        }
        

    }
    printf("%lld\n",fm);
    
    return 0;
}