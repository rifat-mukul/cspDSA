#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s,t;
    cin >> s >> t;
    int count = 0;
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == s[count])
        {
            cout << i+1 << " ";
            count++;
        }
        
    }
    cout << "\n";
    
    return 0;
}