#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        /* code */
        pair<int,int> p1,p2;
        cin >> p1.first >> p1.second;
        cin >> p2.first >> p2.second;

        int mx1 = max(p1.first, p1.second);
        int mx2 = max(p2.first, p2.second);
        int mn1 = min(p1.first, p1.second);
        int mn2 = min(p2.first, p2.second);

        if (mx1==mx2 && mn1+mn2 == mx1)
        {
            cout << "Yes" << "\n";
        } else
        {
            cout << "No" << "\n";
        }
        
        
    }
    
    return 0;
}