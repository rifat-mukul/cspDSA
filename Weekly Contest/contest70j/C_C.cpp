#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 1; 

    while (t--) {
        long long w, l;
        if (scanf("%lld%lld", &w, &l) != 2) break;

        if (w % 2 == 0 || l % 2 == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}