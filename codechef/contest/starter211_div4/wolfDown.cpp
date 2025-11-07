#include <bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int count = 0;
        int n,s;
        scanf("%d",&n);
        for (int i = 0; i < n; i++)
        {
            /* code */
            scanf("%d",&s);
            if (s==0)
            {
                count++;
            } else {
                break;
            }
        }
        
        printf("%d\n",count);
        
    }
    
    return 0;
}