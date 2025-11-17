#include <bits/stdc++.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        /* code */
        if (abs(arr[i] - arr[i+1])==1 || abs(arr[i] - arr[i+1])==0)
        {
            /* code */
            printf("%d ",arr[i]);
        } else {
            int num=arr[i] - arr[i+1];
            if (num<0)
            {
                int x=arr[i];
                while (x<arr[i+1])
                {
                    /* code */
                    printf("%d ",x);
                    x++;
                }
                
            } else if (num>0)
            {
                /* code */
                int z=arr[i];
                while (z>arr[i+1])
                {
                    /* code */
                    printf("%d ",z);
                    z--;
                }
                
            }
            
            
        }
        
        
    }
    printf("%d",arr[n-1]);
    
    
    return 0;
}