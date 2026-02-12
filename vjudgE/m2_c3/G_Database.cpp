#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for (int m = 1; m <=t; m++)
    {
        /* code */
        int i, c;
        cin >> i >> c;
        string ans = "possible";
        map<pair<int, int>, bool> mrk;
        for (int i = 0; i < c; i++)
        {
            int id, code;
            cin >> id >> code;
            if (mrk[{id,code}] == true)
            {
                ans = "impossible";
            }
            mrk[{id, code}] = true;
            
            
        }
        // again 2nd submit
        cout << "Scenario #" << m << ": " << ans << "\n";
        
    }
    
    return 0;
}