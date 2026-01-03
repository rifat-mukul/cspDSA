#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int n;
        scanf("%d",&n);
        if (n==1)
        {
            /* code */
            printf("1\n");
        } else if (n%2!=0)
        {
            printf("-1\n");
        } else {
            for (int i = 1; i <=n; i+=2)
            {
                /* code */
                printf("%d %d ",i+1,i);
            }
            printf("\n");
        }
        
        
    }
    
    return 0;
}