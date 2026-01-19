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
        vector<int> v(n+1);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v[x]++;
        }
        int an=-1;
        for (int i = 1; i <= n; i++) {
            if (v[i]>=3) {
                an=i;
                break;
            }
        }
        cout << an << "\n";
    }
    
    return 0;
}