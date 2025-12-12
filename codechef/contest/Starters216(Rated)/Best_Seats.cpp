#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    scanf("%d",&t);
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
        // std::sort(arr, arr + n);
        int count=arr[0]+arr[1];
        if (n>2)
        {
            for (int i = 1; i < n-1; i++)
            {
                /* code */
                int num=arr[i]+arr[i+1];
                if (num < count)
                {
                    /* code */
                    count=num;
                }
                
            }
            
        }
        printf("%d\n",count);
        
        
        
        
    }
    

}
