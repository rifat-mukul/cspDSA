#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        int* a = (int*)malloc(n * sizeof(int));
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        long long S = 0;
        for (int i = 0; i < n - 1; i++) {
            S += abs(a[i + 1] - a[i]);
        }
        
        long long ans = S;  // No removal case
        
        // Remove first element
        long long candidate = S - abs(a[1] - a[0]);
        if (candidate < ans) ans = candidate;
        
        // Remove last element
        candidate = S - abs(a[n - 1] - a[n - 2]);
        if (candidate < ans) ans = candidate;
        
        // Remove interior element
        for (int k = 1; k < n - 1; k++) {
            candidate = S - abs(a[k] - a[k - 1]) - abs(a[k + 1] - a[k]) + abs(a[k + 1] - a[k - 1]);
            if (candidate < ans) ans = candidate;
        }
        
        printf("%lld\n", ans);
        free(a);
    }
    
    return 0;
}