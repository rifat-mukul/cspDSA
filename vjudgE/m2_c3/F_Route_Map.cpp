#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n>>m;
    vector<string>allS;
    string s;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> s;
        allS.push_back(s);
    }

    map<string, bool> exp;

    for (int i = 0; i < m; i++)
    {
        /* code */
        cin >> s;
        exp[s] = true;
    }

    for (int i = 0; i < n; i++)
    {
        string name = allS[i];
        if (exp[name])
        {
            /* code */
            cout << "Yes" << "\n";
        } else
        {
            cout << "No" << "\n";
        }
        
        
    }
    
    
    
    return 0;
}