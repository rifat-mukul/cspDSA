#include <bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        long long n;
        int k;
        scanf("%lld%d",&n,&k);
        if (k>n)
        {
            printf("NO\n");
        } else if (n%2!=0)
        {
            if (k%2!=0)
            {
                /* code */
                printf("YES\n");
                long long count = 0;
                for (int i = 0; i < k-1; i++)
                {
                    /* code */
                    count++;
                    printf("1");
                }
                printf("%lld",(n-count));
                printf("\n");
                
            } else {
                printf("NO\n");
            }
            
        } else if (n%2==0)
        {
            /* code */
            if (k%2!=0)
            {   
                if ((k-1)*2 >n)
            {
                /* code */
                printf("NO\n");
            } else {
                long long count = 0;
                printf("YES\n");
                for (int i = 0; i < k-1; i++)
                {
                    /* code */
                    count+=2;
                    printf("2 ");
                }
                printf("%lld",(n-count));
                printf("\n");
            }
            
                
                
            } else {
                if ((k-1)*2 < n)
                {
                    long long count = 0;
                    printf("YES\n");
                    for (int i = 0; i < k-1; i++)
                    {
                        /* code */
                        count+=2;
                        printf("2 ");
                    }
                    printf("%lld",(n-count));
                    printf("\n");
                } else {
                    printf("YES\n");
                    long long count = 0;
                    for (int i = 0; i < k-1; i++)
                    {
                        /* code */
                        count++;
                        printf("1");
                    }
                    printf("%lld",(n-count));
                    printf("\n");
                }
                // this code is mine rifat mukul
            }
            
        }
        
        
        
    }
    
    return 0;
}