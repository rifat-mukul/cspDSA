#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long q;
    cin >> q;
    vector<long long> v;
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 0) {
            long long x;
            cin >> x;
            v.push_back(x);
        } else if (t == 1) {
            long long k;
            cin >> k;
            cout << v[k] << "\n";
        } else
        {
            v.pop_back();
        }
        
    }
    
    return 0;
}