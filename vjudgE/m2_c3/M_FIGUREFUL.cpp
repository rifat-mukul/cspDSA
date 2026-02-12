#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    map<pair<int,int>, string> mp;
    for (int i = 0; i < n; i++)
    {
        long long c1,c2;
        string s;
        cin >> c1>>c2>>s;
        mp[make_pair(c1,c2)] = s;
    }

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        /* code */
        int n1,n2;
        cin >> n1>>n2;
        cout << mp[make_pair(n1,n2)] << "\n";
    }

    
    
    return 0;
}