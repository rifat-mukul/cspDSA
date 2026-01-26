#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<string>v(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> v[i];
    }
    // cout << v[0] << "\n";

    for (int i = n-1; i>=0; i--)
    {
        cout << v[i] << "\n";
    }
    
    
    return 0;
}