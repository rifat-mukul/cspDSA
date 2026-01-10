#include<bits/stdc++.h>

int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        /* code */
        int n;
        scanf("%d",&n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            scanf("%d",&arr[i]);
        }
        int miN=arr[0], mnIdx=0;
        for (int i = 1; i < n; i++)
        {
            /* code */
            if (arr[i] < miN)
            {
                /* code */
                miN=arr[i];
                mnIdx=i;
            }
            
        }
        arr[mnIdx]++;

        int rst=1;
        for (int i = 0; i < n; i++)
        {
            /* code */
            rst*=arr[i];
        }
        printf("%d\n",rst);
        
        
    }
    
    return 0;
}