#include <stdio.h>
#include <stdlib.h>

#define MAXN 200005

int a[MAXN];

void solve() {
    int n;
    if (scanf("%d", &n) != 1) return;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    if (a[0] == -1 && a[n-1] == -1) {
        
        a[0] = 0;
        a[n-1] = 0;
    } else if (a[0] == -1) {

        a[0] = a[n-1];
    } else if (a[n-1] == -1) {

        a[n-1] = a[0];
    }
    for (int i = 1; i < n - 1; i++) {
        if (a[i] == -1) {
            a[i] = 0;
        }
    }

    int diff = a[n-1] - a[0];
    if (diff < 0) diff = -diff;

    printf("%d\n", diff);
    
    for (int i = 0; i < n; i++) {
        printf("%d%c", a[i], (i == n - 1) ? '\n' : ' ');
    }
}

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        solve();
    }
    
    return 0;
}