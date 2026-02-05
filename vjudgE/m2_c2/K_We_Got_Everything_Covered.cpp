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
        int n,k;
        cin >> n >> k;
        string temp= "";
        for (int i = 0; i < k; i++)
        {
            temp+=('a'+i);
        }

        for (int i = 0; i < n; i++)
        {
            cout << temp;
        }
        cout << "\n";
        
        
    }
    
    return 0;
}