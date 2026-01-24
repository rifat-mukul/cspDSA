#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    long long ans = 1, cnt = 1;
    for (int i = 1; i < n; i++) {
        if (v[i] >= v[i - 1]) {
            cnt++;
            ans = max(ans, cnt);
        } else {
            cnt = 1;
        }
    }
    cout << ans << "\n";
    
    return 0;
}