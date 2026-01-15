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
        int n,m;
        cin >> n >> m;
        long long smn=0,smm=0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            long long num;
            cin >> num;
            smn+=num;
        }
        for (int i = 0; i < m; i++)
        {
            long long num1;
            cin >> num1;
            smm+=num1;
        }

        if (smn>smm)
        {
            /* code */
            cout << "Tsondu" << "\n";
        } else if (smm>smn)
        {
            /* code */
            cout << "Tenzing" << "\n";
        } else
        {
            cout << "Draw" << "\n";
        }
        
        
        
        
         
    }
    
    return 0;
}