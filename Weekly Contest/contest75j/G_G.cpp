#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int n,x;
        scanf("%d%d",&n,&x);
        int flt=2;
        for (int i = 1; ; i++)
        {
            /* code */
            if (flt>=n)
            {
                /* code */
                printf("%d\n",i);
                break;
            } else {
                flt+=x;
            }
            
        }
        
    }
    
    return 0;
}