#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int n,c;
        scanf("%d%d",&n,&c);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            scanf("%d",&arr[i]);
        }
        char carr[n];
        scanf("%s",carr);
        int sum0=0,sum1=0;

        for (int i = 0; i < n; i++)
        {
            /* code */
            if (carr[i]=='0')
            {
                /* code */
                sum0+=arr[i];
            } else {
                sum1+=arr[i];
            }
            
        }
        
        
        if (sum0 < c)
        {
            /* code */
            printf("%d\n",sum0);
        } else {
            int mx;
            if (sum0 > sum0 + sum1-c)
            {
                /* code */
                mx=sum0;
            } else {
                mx= sum0 + sum1-c;
            }
            
            printf("%d\n",mx);
        }
        
        
    }
    
    return 0;
}