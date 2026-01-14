#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    string s;
    cin >> s; 

    int zC = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            zC++;
        }
    }
    cout << abs(n-(zC*2)) << "\n";
    
    return 0;
}