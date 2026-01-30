#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<vector<char>> v1(n,vector<char>(n));
    vector<vector<char>>v2(n, vector<char>(n));

    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < n; j++)
        {
            /* code */

            cin >> v1[i][j];
            // cout << v1[i][j];

            // cout << v1[i][j] << "\n";
        }
        // cout << "\n";
        
    }
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < n; j++)
        {
            /* code */
            cin >> v2[i][j];
        }
        
    }

    // for (int i = 0; i < n; i++)
    // {
        
    //     for (int j = 0; j < n; j++)
    //     {
    //         /* code */
    //         // cout << v1[i][j];
    //         cout << v1[i][j] << "\n";
    //     }
    //     cout << "\n";
        
    // }
    // cout << "\n";

    // cout << v1[0][0] << "\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v1[i][j] != v2[i][j])
            {
                cout << i + 1 << " " << j + 1 << "\n";
                break;
            }
            
        }
        
    }
    
    
    return 0;
}