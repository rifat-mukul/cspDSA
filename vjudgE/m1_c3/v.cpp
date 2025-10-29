#include <bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a1,a2,b1,b2;
        scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
        int netExport = (a1-a2) + (b1-b2);

        if (netExport>=0)
        {
            printf("NO\n");
        } else {
            printf("YES\n");
        }  
        
    }
    
    return 0;
}