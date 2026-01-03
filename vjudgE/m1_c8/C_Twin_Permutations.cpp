#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int n;
        scanf("%d",&n);
        for (int i = 0; i < n; i++)
        {
            /* code */
            int x;
            scanf("%d",&x);
            printf("%d ",n+1-x);
        }
        printf("\n");
        
        
    }
    
    return 0;
}