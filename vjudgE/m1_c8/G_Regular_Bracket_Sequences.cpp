#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int n;
        scanf("%d",&n);
        for (int i = 1; i <=n; i++)
        {
            /* code */
            for (int j = 1; j <=i; j++)
            {
                /* code */
                printf("(");
            }
            for (int j = 1; j <=i; j++)
            {
                /* code */
                printf(")");
            }
            for (int j = 1; j<=n-i; j++)
            {
                /* code */
                printf("()");

            }
            printf("\n");
            
        }
        
    }
    
    return 0;
}