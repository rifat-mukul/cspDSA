#include <bits/stdc++.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        int mod = x% 10;
        if (mod >= 5)
        {
            /* code */
            x += (10-mod);
        } else {
            x -= mod;
        }
        
        printf("%d\n", 100 - x);
    }
    
    return 0;
}