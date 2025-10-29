#include <bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,w,q;
        int rp=0,qty=0;
        scanf("%d",&n);
        
        for (int i = 0; i < n; i++)
        {
            /* code */
            scanf("%d%d",&w,&q);
            if (w<=10)
            {
                /* code */
                if (q>qty)
                {
                    /* code */
                    qty = q;
                    rp = i+1;
                }
                
            }
            
        }
        printf("%d\n",rp);  
    }
    
    return 0;
}