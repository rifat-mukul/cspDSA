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
        int n;
        cin >> n;
        int oC=0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            int num;
            cin >> num;
            if (num%2!=0)
            {
                /* code */
                oC++;
            }
            
        }
        if (oC%2==0)
        {
            /* code */
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
        
        
    }
    
    return 0;
}