#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a = "abc";
    string b = "xyz";

    string c;
    for(auto& it : a) {
        c.push_back(it);
    }

    for(auto& it : b) {
        c.push_back(it);
    }

    cout << c << "\n";
    return 0;
}