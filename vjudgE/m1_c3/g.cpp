#include <bits/stdc++.h>

int main() {
    int n, x, count = 0;
    scanf("%d%d",&n,&x);
    while (n--)
    {
        int s;
        scanf("%d",&s);
        if (s <= x)
        {
            count+=s;
        }
        
    }
    printf("%d\n",count);
    
    return 0;
}