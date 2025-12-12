#include<bits/stdc++.h>

int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        /* code */
        long long n;
        scanf("%lld",&n);
        long long adyCount=0,omCount=0,c1=0,c2=0;
        for (int i = 0; i < n; i++)
        {
            long long a;
            scanf("%lld",&a);
            if (a>0)
            {
                /* code */
                c1++;
            } else if (a==0)
            {
                /* code */
                if (c1>omCount)
                {
                    /* code */
                    omCount=c1;
                }
                c1=0;
                
            }
            
            
        }
        if (c1==n)
        {
            /* code */
            omCount=c1;
        }
        if (c1>omCount)
        {
            /* code */
            omCount=c1;
        }
        

        for (int j = 0; j < n; j++)
        {
            long long a;
            scanf("%lld",&a);
            if (a>0)
            {
                /* code */
                c2++;
            } else if (a==0)
            {
                /* code */
                if (c2>adyCount)
                {
                    /* code */
                    adyCount=c2;
                }
                c2=0;
                
            }
            
            
        }
        if (c2==n)
        {
            /* code */
            adyCount=c2;
        }
        if (c2>adyCount)
        {
            /* code */
            adyCount=c2;
        }

        // printf("%lld  %lld\n",omCount,adyCount);

        if (omCount>adyCount)
        {
            printf("Om\n");
        } else if (adyCount>omCount)
        {
            printf("Addy\n");
        } else {
            printf("Draw\n");
        }
        
        
        
        
    }
    
    return 0;
}