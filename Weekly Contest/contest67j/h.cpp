#include<bits/stdc++.h>


int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        long long n;
        scanf("%lld",&n);
        long long mainArr[n];
        long long evenArr[n/2];
        long long oddArr[n/2];
        long long evenCount=2;
        long long oddCount = 1;
        long long evenSum=0, oddSum=0;
        for (long long i = 0; i < n/2; i++)
        {
            evenArr[i] = evenCount;
            oddArr[i] = oddCount;
            evenSum+=evenCount;
            oddSum+=oddCount;
            evenCount=evenCount+2;
            oddCount=oddCount+2;
        }
        if (n==2 || (evenSum != oddSum))
        {
            printf("NO\n");
        } else {
            for (long long i = 0; i < n/2; i++)
            {
                mainArr[i] = evenArr[i];
            }
            for (long long i = n/2; i < n; i++)
            {
                mainArr[i] = oddArr[i];
            }
            printf("YES\n");
            for (long long i = 0; i < n; i++)
            {
                if (i==0)
                {
                    /* code */
                    printf("%lld",mainArr[i]);
                } else if (i>0 && i<n-1)
                {
                    printf(" %lld ",mainArr[i]);
                } else {
                    printf("%lld\n",mainArr[i]);
                }
                
                
                // printf("%lld",mainArr[i]);
            }
            
            
            
        }
        
        
    }
    
    return 0;
}
