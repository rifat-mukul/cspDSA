#include<bits/stdc++.h>

int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        /* code */
        long long n,k;
        scanf("%lld%lld",&n,&k);
        int arr[n];
        int mx=0, count=0;
        for (int i = 0; i < k; i++)
        {
            /* code */
            int num;
            scanf("%d",&num);
            // printf("%d ",num);
            if (num>mx)
            {
                /* code */
                mx=num;
            }
            count+=((2*num) - 1);
            
        }
        // printf("\n");

        printf("%d\n",count - (2*mx-1));
        
    }
    
    return 0;
}