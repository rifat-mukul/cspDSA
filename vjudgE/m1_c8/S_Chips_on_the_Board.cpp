#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int n;
        scanf("%d",&n);
        int a[n],b[n];
        long long mnA=1e9,smA=0,mnB=1e9,smB=0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            scanf("%d",&a[i]);
            if (mnA>a[i])
            {
                /* code */
                mnA=a[i];
            }
            smA+=a[i];
        }
        for (int i = 0; i < n; i++)
        {
            /* code */
            scanf("%d",&b[i]);
            if (mnB>b[i])
            {
                /* code */
                mnB=b[i];
            }
            smB+=b[i];
        }

        long long ans1=smA+mnB*n, ans2=smB+mnA*n;
        
        if (ans1>ans2) 
        {
            /* code */
            ans1=ans2;
        }
        printf("%lld\n",ans1);
        
    }
    
    return 0;
}