#include<bits/stdc++.h>


int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        long long n;
        scanf("%lld",&n);
        long long count = 0;
        int arr[9999];
        int mod = 10;
        while (n>0)
        {
            /* code */
            long long num = n%mod;
            if (num!=0)
            {
                arr[count] = num;
                count++;
                
                n = n-num;
                //my code 
            }
            mod*=10;
            
        }
        printf("%d\n",count);
        for (int i = 0; i < count; i++)
        {
            /* code */
            printf("%d ",arr[i]);
        }
        printf("\n");
        
    }
    
    return 0;
}
