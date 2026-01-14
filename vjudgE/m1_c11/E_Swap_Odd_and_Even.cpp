#include <bits/stdc++.h>

using namespace std;

string reverce(string s) {
    int ln = s.size();
    // cout << ln << "\n";
    for (int i = 0; i < ln; i+=2)
    {
        /* code */
        if (i+1 < ln)
        {
            /* code */
            char temp = s[i];
            s[i] = s[i+1];
            s[i+1]=temp;
        }
        
    }
    return s;
    
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    // cout << s << "\n";
    string nw = reverce(s);
    cout << nw << "\n";
    return 0;
}