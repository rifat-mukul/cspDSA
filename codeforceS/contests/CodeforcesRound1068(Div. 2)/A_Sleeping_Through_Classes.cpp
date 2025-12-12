#include<stdio.h>

void solve() {
    int n, k;
    if (scanf("%d%d", &n, &k) != 2) return;

    char arr[101];
    if (scanf("%s", arr) != 1) return;

    int max_sleep_count = 0;
    int W = 0;
    
    for (int i = 0; i < n; i++) {
        
        if (arr[i] == '1') {
            W = k;
        } else {
            if (W > 0) {
                W--;
            } else {
                max_sleep_count++;
            }
        }
    }

    printf("%d\n", max_sleep_count);
}

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        solve();
    }
    
    return 0;
}