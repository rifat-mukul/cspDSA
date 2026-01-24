#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        vector<int> a(n), b;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        b = a;
        sort(b.begin(), b.end());
        int ma = b[n - 1], mx2 = b[n - 2];
        for (int i = 0; i < n; i++) {
            if (a[i] == ma) {
                cout << a[i] - mx2 << " ";
            } else {
                cout << a[i] - ma << " ";
            }
        }
        cout << "\n";

    }
    
    return 0;
}