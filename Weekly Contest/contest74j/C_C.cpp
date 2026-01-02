#include <stdio.h>

void solve() {
    long long n, m;
    if (scanf("%lld %lld", &n, &m) != 2) return;

    long long total_sum = (n * (n + 1)) / 2;

    long long sum_q = 0;
    for (int i = 0; i < m; i++) {
        long long q_element;
        scanf("%lld", &q_element);
        sum_q += q_element; 
    }

    long long max_cost = total_sum - sum_q;

    printf("%lld\n", max_cost);
}

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        solve();
    }

    return 0;
}