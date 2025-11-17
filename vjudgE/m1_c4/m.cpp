#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    scanf("%lld", &t);
    
    while (t--) {
        long long n;
        scanf("%lld", &n);
        
        long long arr[n];  
        for (int i = 0; i < n; i++) {
            scanf("%lld", &arr[i]); 
        }
        
        sort(arr, arr + n);

        // for (int i = 0; i < n; i++) {
        //     printf("%lld ", arr[i]);
        // }
        // printf("\n"); 

        if (n==1||n==2)
        {
            /* code */
            printf("%d\n",-1);
        }
        
        for (int i = 0; i < n-2; i++)
        {
            /* code */
            if (arr[i]==arr[i+1] &&
              arr[i+1] == arr[i+2]
            )
            {
                /* code */
                printf("%lld\n",arr[i]);
                break;
            } else if (i==n-3)
            {
                printf("%d\n",-1);
            }
            
            
        }
        
    }
    
    return 0;
}
