#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    cin >> a>>b;
    int x = a + b + (a*b);
    if (x == 111)
    {
        /* code */
        cout << "Yes" << "\n";
    } else
    {
        cout << "No" << "\n";
    }
    
    
    return 0;
}