#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int x = s[3] - '0';
    int y = s[4] - '0';
    int z = s[5] - '0';
    // cout << x << y << z << "\n";
    int num = (x * 100) + (y*10) + z;
    // cout << num << "\n";
    if (num >= 1 && num < 350 && num != 316)
    {
        /* code */
        cout << "Yes" << "\n";
    } else
    {
        cout << "No" << "\n";
    }
    
    
    
    return 0;
}