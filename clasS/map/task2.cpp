#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    map<int,int>mp;
    mp[1050] = 99;
    mp[1000] = 89;
    cout << mp[1000] << "\n";
    cout << mp[1050] << "\n";
    cout << mp.size() << "\n";

    mp[2] = 85;
    cout << mp[1000] << "\n";

    for(auto& it:mp) {
        cout << it.first << " " << it.second << "\n";
    }
    return 0;
}