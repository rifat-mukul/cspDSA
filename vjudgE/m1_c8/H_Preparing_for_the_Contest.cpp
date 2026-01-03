#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int n,k;
        scanf("%d%d",&n,&k);
        for (int i = 1; i <=n; i++)
        {
            /* code */
            int num = (n-k) -i+1;
            if (num >=1)
            {
                /* code */
                printf("%d ",num);
            } else {
                printf("%d ",i);
            }
            
        }
        printf("\n");
    }
    
    return 0;
}