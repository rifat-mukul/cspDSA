#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long q;
    cin >> q;
    set<int>s;
    while (q--)
    {
        /* code */
        int y;
        long long x;
        cin >> y >> x;

        if (y == 1)
        {
            /* code */
            s.insert(x);
        } else if (y == 2)
        {
            s.erase(x);
        } else if (y == 3)
        {
            /* code */
            if (s.find(x) != s.end())
            {
                /* code */
                cout << "Yes" << "\n";
            } else
            {
                cout << "No" << "\n";
            }
            
            
        }
        
        
        

    }
    
    return 0;
}