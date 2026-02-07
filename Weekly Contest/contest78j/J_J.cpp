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
        vector<int> odd, even;
        for (int i = 0; i < n; i++)
        {
            /* code */
            long long a;
            cin >> a;
            if (a%2==0)
            {
               even.push_back(i+1);
            } else
            {
                odd.push_back(i+1);
            }
            
            
        }
        if (odd.size() >= 3)
        {
            /* code */
            cout << "YES" << "\n";
            cout << odd[0] << " " << odd[1] << " " << odd[2] << "\n";
        } else if (odd.size() >=1 && even.size() >= 2)
        {
            cout << "YES" << "\n";
            cout << odd[0] << " " << even[0] << " " << even[1] << "\n";
        } else
        {
            cout << "NO" << "\n";
        }
        
    }
    
    return 0;
}