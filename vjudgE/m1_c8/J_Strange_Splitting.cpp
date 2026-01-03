#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d", &t);
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
        if (arr[0]==arr[n-1])
        {
            /* code */
            printf("NO\n");
        } else {
            printf("YES\n");
            printf("RB");
            for (int i = 2; i < n; i++)
            {
                /* code */
                printf("R");

            }
            printf("\n");
            
        }
        
        
    }
    
    return 0;
}