#include <stdio.h>

#define MAXN 200005

int a[MAXN];
int b[MAXN];

void solve() {
    int n;
    if (scanf("%d", &n) != 1) return;

    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    
    for (int i = 1; i <= n; i++) {
        scanf("%d", &b[i]);
    }

    int diff_count = 0;
    int last_diff_index = 0;

    for (int i = 1; i <= n; i++) {
        if (a[i] != b[i]) {
            diff_count++;
            last_diff_index = i;
        }
    }

    if (diff_count % 2 == 0) {
        printf("Tie\n");
    } else {
        
        if (last_diff_index % 2 != 0) {
            printf("Ajisai\n");
        } else {
            printf("Mai\n");
        }
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