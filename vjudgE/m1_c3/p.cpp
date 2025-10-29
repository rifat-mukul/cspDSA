#include <bits/stdc++.h>

int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {   
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        int comtime= x*y;
        int totalTime = z*24*60;
        if (comtime > totalTime)
        {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
        
        
    }
    
    return 0;
}