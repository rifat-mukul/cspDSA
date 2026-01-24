#include<bits/stdc++.h>

using namespace std;
int main() {
    int x, m;
    cin >> x >> m;
    vector < char > a[x + 1];
    for (int i = 0; i < m; i++) {
        int x;
        char c;
        cin >> x >> c;
        int ok;
        if (c == 'M') ok = 1;
        else ok = 0;
        for (auto tmp: a[x]) {
            if (tmp == 'M') ok = 0;
        }
        if (ok) cout << "Yes\n";
        else cout << "No\n";
        a[x].push_back(c);
    }
}