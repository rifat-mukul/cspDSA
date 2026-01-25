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
        long long x,y,z;
        cin >> x >> y >> z;
        long long a1,b1,a2,b2,a3,b3;
        b1 = x;
        a1 = y*z;
        b2 = y;
        a2 = x*z;
        b3 = z;
        a3 = x*y;
        if (a1%b1==0)
        {
            /* code */
            cout << a1 << " " << b1 << "\n";
        } else if (a2%b2==0)
        {
            cout << a2 << " " << b2 << "\n";
        } else if (a3%b3==0)
        {
            cout << a3 << " " << b3 << "\n";
        } else
        {
            cout << -1 << "\n";
        }
        
        
        
        
    }
    
    return 0;
}