#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    map<string,long long> mp;
    for (int i = 0; i < n; i++)
    {
        /* code */
        string s;
        long long k;
        cin >> s >> k;
        mp[s] = k;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     string si;
    //     cin >> si;
    //     auto it = mp.find(si);
    //     if (it != mp.end())
    //     {
    //         /* code */
    //         cout << it->first<<"="<<it->second << "\n";
    //     } else
    //     {
    //         cout << "Not found" << "\n";
    //     }
        
        
    // }

    string si;
    while (cin >> si)
    {
        auto it = mp.find(si);
        if (it != mp.end())
        {
            /* code */
            cout << it->first<<"="<<it->second << "\n";
        } else
        {
            cout << "Not found" << "\n";
        }
    }
    


    
    
    return 0;
}