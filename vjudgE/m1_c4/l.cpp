#include <bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int sm=10;
        int arr[n];
        int pos;
        for (int i = 0; i < n; i++)
        {
            int num;
            scanf("%d",&num);
            arr[i]=num;
            if (num<sm)
            {
                sm=num;
                pos=i;
            }
            
        }
        long long mult=1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i]==sm && pos==i)
            {
                /* code */
                mult=mult*(arr[i]+1);
            } else {
                mult=mult*arr[i];
            }
            
        }
        printf("%lld\n",mult);
        
        
    }
    
    return 0;
}