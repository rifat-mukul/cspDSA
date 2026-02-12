#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    set<pair<string,string>> st;
    while (n--)
    {
        /* code */
        string s1,s2;
        cin >> s1>>s2;
        st.insert({s1,s2});
    }
    cout << st.size() << "\n";
    
    return 0;
}