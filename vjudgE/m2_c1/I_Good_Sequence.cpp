#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, ans = 0;
    cin >> n;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (x > n)
        {
            ans++;
        } else {
            a[x]++;
        }
        
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] >= i)
        {
            /* code */
            ans += a[i] - i;
        } else
        {
            ans += a[i];
        }
        
        
    }
    cout << ans << "\n";
    return 0;
}