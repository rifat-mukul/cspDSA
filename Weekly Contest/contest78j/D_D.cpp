#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,x,y,z;
    cin >> n >> x>>y>>z;
    int big = max(x,y);
    int small = min(x,y);

    if (z <= big && z >= small)
    {
        cout << "Yes" << "\n";
    } else
    {
        cout << "No" << "\n";
    }
    
    
    return 0;
}