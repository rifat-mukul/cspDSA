#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    map<string, int> diary;
    while (t--) {
        string command;
        cin >> command;
        if (diary[command] == 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
        diary[command] = 1;
    }
    
    return 0;
}