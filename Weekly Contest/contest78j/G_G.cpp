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
        vector<int>V;
        for (int i = 0; i < n; i++)
        {
            /* code */
            long long b;
            cin >> b;
            V.push_back(b);
        }
        int start = 0, end = n-1;

        for (int i = 0; i < n; i++)
        {
            /* code */
            if (i%2==0)
            {
                /* code */
                cout << V[start] << " ";
                start++;
            } else
            {
                cout << V[end] << " ";
                end--;
            }
            
            
        }
        cout << "\n";
        
        
    }
    
    return 0;
}