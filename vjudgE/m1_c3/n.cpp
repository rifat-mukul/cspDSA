#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long long x, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%lld%lld", &x, &n);
        
        long long op = (n + 99) / 100;
        long long new_planes = op - x;
        
        if (new_planes > 0) {
            printf("%lld\n", new_planes);
        } else {
            printf("0\n");
        }
    }

    return 0;
}
