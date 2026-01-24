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
        int n=8;
        char as = 'B';
        while (n--)
        {
            /* code */
            vector<char> v(8);
            int cnt=0;
            for (int i = 0; i < 8; i++)
            {
                /* code */
                cin >> v[i];
                cnt += (v[i]=='R');
            }
            if (cnt==8)
            {
                /* code */
                as = 'R';
            }
        }
        cout << as << "\n";
        
    }
    
    return 0;
}