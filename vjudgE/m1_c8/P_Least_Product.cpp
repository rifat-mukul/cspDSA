#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int n;
        scanf("%d",&n);
        int pCount=0, nCount=0,zCount=0, nPos=0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            long long num;
            scanf("%lld",&num);
            if (num > 0)
            {
                pCount++;
            } else if (num < 0)
            {
                /* code */
                nCount++;
                nPos=i;
            } else {
                zCount++;
            }
            
            
        }
        if (zCount>0 || nCount%2!=0)
        {
            /* code */
            printf("0\n");
        }else if (pCount==n)
        {
            /* code */
            printf("1\n");
            printf("1 0\n");
        } else {
            printf("1\n");
            printf("%d 0\n",nPos);
        }
        
        
        
        
    }
    
    return 0;
}