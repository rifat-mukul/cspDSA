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
        string sh;
        cin >> sh;
        char mn = *min_element(sh.begin(), sh.end());

        int min = 0;

        for (int i = 0; i < n; i++)
        {
            /* code */
            if (sh[i]==mn)
            {
                /* code */
                min=i;
            }
            
        }
        cout << mn;
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (min == i)
            {
                /* code */
                continue;
            }
            cout << sh[i];
            
        }
        cout << "\n";
        
        
    }
    
    return 0;
}