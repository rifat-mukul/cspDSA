#include <iostream>

using namespace std;

int main() {
    // Optimization for faster I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int n;
        cin >> n;
        
        // Every integer x is a perfect root because y = x*x is always an integer.
        // We can just print 1, 2, 3, ..., n.
        for (int i = 1; i <= n; i++) {
            cout << i << (i == n ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}