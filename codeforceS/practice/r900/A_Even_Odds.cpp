#include<bits/stdc++.h>

int main() {
    long long n,k,pos=0;
    scanf("%lld%lld",&n,&k);
    if (n%2!=0)
    {
        /* code */
        if (k<=(n/2)+1)
        {
            printf("%lld",(2*k)-1);
            
        } else {
            pos=k-((n/2)+1);
            // printf("%d\n",pos);
            printf("%lld",2*pos);
        }
        

    } else {
        if (k<=(n/2))
        {
            /* code */
            printf("%lld",(2*k)-1);
            
        } else {
            pos=k-(n/2);
            printf("%lld",2*pos);
        }
    }
    
    
    
    return 0;
}