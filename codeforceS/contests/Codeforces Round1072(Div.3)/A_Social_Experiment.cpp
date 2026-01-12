#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while (t--)
    {
        /* code */
        long long n;
        cin >> n;
        if (n==2)
        {
            /* code */
            cout << 2 << "\n";
        } else if (n==3)
        {
            /* code */
            cout << 3 << "\n";
        } else {
            cout << n%2 << "\n";
        }
        
        
    }
    
    return 0;
}