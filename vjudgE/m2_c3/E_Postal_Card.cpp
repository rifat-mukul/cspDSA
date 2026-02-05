#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<string> lst;
    map<string, bool> maP;
    string s;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> s;
        lst.push_back(s);
    }
    for (int i = 0; i < m; i++)
    {
        /* code */
        cin >> s;
        maP[s] = true;
    }
    int ans = 0;
    for(string s : lst) {
        string last3Digit = s.substr(3,3);
        if (maP[last3Digit]) ans++;
        
    }
    cout << ans << "\n";
    
    
    return 0;
}