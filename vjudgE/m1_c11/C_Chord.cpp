#include <bits/stdc++.h>

using namespace std;

void Check(string s) {
    if (s=="ACE" || s== "BDF" || s=="CEG" ||
        s=="DFA" || s=="EGB" || s=="FAC" ||
        s=="GBD"
    )
    {
        cout << "Yes" << "\n";
    } else
    {
        cout << "No" << "\n";
    }
    
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    Check(s);
    return 0;
}