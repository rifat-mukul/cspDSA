#include <bits/stdc++.h>

bool isRepdigit(int x) {
    int d = x % 10;
    while (x > 0) {
        if (x % 10 != d) return false;
        x /= 10;
    }
    return true;
}


int main() {

    int n;
    scanf("%d",&n);
    int arr[n];
    int x=0;
    int range=n;
    while (range--)
    {
        /* code */
        scanf("%d",&arr[x]);
        x++;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     printf("%d\n",arr[i]);
    // }
    
    int dayCount=0;

    for (int i = 0; i <= n; i++)
    {
        if (isRepdigit(arr[i]))
        {
            for (int j = 1; j <= arr[i]; j++)
            {
                /* code */
                if (isRepdigit(j))
                {
                    dayCount++;
                }
                
            }
            
        }
        
    }

    printf("%d",dayCount);
    
    
    return 0;
}