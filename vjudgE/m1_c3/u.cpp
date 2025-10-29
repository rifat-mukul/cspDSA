#include <bits/stdc++.h>

int main() {
    int t,y,x;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d%d",&x,&y);
        int pplFeed = x/y;
        if (pplFeed > 20)
        {
            printf("%d\n",20);
        } else {
            printf("%d\n",pplFeed);
        }
        
        
    }
    
    return 0;
}