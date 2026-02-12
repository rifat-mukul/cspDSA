#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    map<int, int> m;
    for (long long i = 0, a; i < n; i++)
    {
        /* code */
        cin >> a;
        m[a] ++;
    }

    int ans = 0;
    for(auto it : m) {
        int nm = it.first;
        int frq = it.second;
        if (frq > nm)
        {
            /* code */
            ans += frq-nm;
        } else if (nm>frq)
        {
            ans+=frq;
        }
        
        
    }
    cout << ans << "\n";
    
    return 0;
}