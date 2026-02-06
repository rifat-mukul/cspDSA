#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int a1,a2,b1,b2;
        cin >> a1>>a2>>b1>>b2;
        int x = (a1-a2) + (b1-b2);
        if(x<0) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    
    return 0;
}