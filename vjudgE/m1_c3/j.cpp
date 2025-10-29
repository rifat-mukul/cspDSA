#include <bits/stdc++.h>

int main() {
    int t,n,x;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d%d",&n,&x);
        int rst = x - n;
        if (rst >=0)
        {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        
    }
    
    return 0;
}