#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int x,y,k;
        scanf("%d%d%d",&x,&y,&k);
        if (y<x)
        {
            /* code */
            printf("%d\n",x);
        } else if (x+k>=y)
        {
            /* code */
            printf("%d\n",y);
        } else {
            printf("%d\n",y + y-(x+k));
        }
        
        
    }
    
    return 0;
}