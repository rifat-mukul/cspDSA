#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n,m;
    cin >> n >> m;
    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        /* code */
        long long nm;
        cin >> nm;
        mp[nm]++;
    }

    for (int i = 0; i < m; i++)
    {
        /* code */
        long long x;
        cin >> x;
        auto it = mp.upper_bound(x);
        if (it == mp.begin())
        {
            /* code */
            cout << -1 << "\n";
            continue;
        }
        it--;
        cout << it->first << "\n";
        mp[it->first]--;
        if (mp[it->first] == 0) 
        {
            /* code */
            mp.erase(it->first);
        }
        
        
    }
    
    
    return 0;
}