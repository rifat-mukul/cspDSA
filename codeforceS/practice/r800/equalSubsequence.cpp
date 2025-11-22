#include <bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        int arr[n]={0};
        if (n==k)
        {
            /* code */
            for (int i = 0; i < n; i++)
            {
                /* code */
                arr[i]=1;
            }
            
        } else {
            int count=0;
            for (int i = 0; i < k; i=i+1)
            {
                arr[i]=1;
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            /* code */
            printf("%d",arr[i]);
        }
        printf("\n");
        
        
    }
       
    return 0;
}