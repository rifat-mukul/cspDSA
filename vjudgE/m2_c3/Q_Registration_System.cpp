#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    map<string,int> mp;
    for (int i = 0; i < n; i++)
    {
        string st;
        cin >> st;
        auto it = mp.find(st);
        if (it != mp.end())
        {
            /* code */
            cout << it->first << it->second << "\n";
            it->second++;
        } else
        {   
            cout << "OK" << "\n";
            mp[st]++;
        }
        
        
        
    }
    
    return 0;
}