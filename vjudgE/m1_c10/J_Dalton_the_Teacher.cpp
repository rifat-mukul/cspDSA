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
        long long n;
        cin >> n;
        int inP=0;
        for (int i = 1; i <= n; i++)
        {
            /* code */
            long long num;
            cin >> num;
            if (num == i)
            {
                /* code */
                inP++;
            }
            
        }
        cout << (inP+1)/2 << "\n";
        
        
    }
    
    return 0;
}