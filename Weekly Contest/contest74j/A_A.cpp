#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        long long n,k,x,p;
        scanf("%lld%lld%lld%lld",&n,&x,&k,&p);
        long long c=1;
        while (c<=k)
        {
            /* code */
            if (c<=x)
            {
                /* code */
                p+=10;
                c++;
            } else {
                p+=5;
                c++;
            }
            
        }
        if (n==k)
        {
            /* code */
            p+=20;
        }
        printf("%d\n",p);
        
        
    }
    
    return 0;
}