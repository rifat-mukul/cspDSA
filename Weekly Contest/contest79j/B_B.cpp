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
        int l,v1,v2;
        cin >> l >> v1 >> v2;
        double v1t =(double) l/v1;
        double v2t =(double) l/v2;

        int v1r = floor(v1t);
        int v2r = floor(v2t);
        
        
        
        // cout <<v1t << " "<< v1r << " " << " " <<v2t << " "<< v2r << "\n";

        if (v1t > v1r)
        {
            /* code */
            v1r++;
        }
        if (v2t > v2r)
        {
            /* code */
            v2r ++;
        }

        // cout <<v1t << " "<< v1r << " " << " " <<v2t << " "<< v2r << "\n";
        
        
        int x = (v1r-v2r) - 1;
        cout << x << "\n";
    }
    
    return 0;
}