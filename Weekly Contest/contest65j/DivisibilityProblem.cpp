#include <bits/stdc++.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long a, b;
        scanf("%lld %lld", &a, &b);

        long long r = a % b;

        if (r == 0)
        {
            printf("0\n");
        } else {
            printf("%lld\n", (b - r));
        }
    }
    
    return 0;
}