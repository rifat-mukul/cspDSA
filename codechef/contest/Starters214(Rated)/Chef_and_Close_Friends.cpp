#include<bits/stdc++.h>

int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        int fur=x+y, flr=x-y;
        int our=x+z,olr=x-z;
        if (our==olr)
        {
            /* code */
            printf("%d\n",0);
        } else {
            if (y>=z)
            {
                /* code */
                printf("%d\n",our-olr);
            } else {
                printf("%d\n",fur-flr);
            }
            
        }
        
        
    }
    
    return 0;
}