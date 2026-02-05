#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 8; i++)
        {
            /* code */
            for (int j = 0; j < 8; j++)
            {
                /* code */
                char ch;
                cin >> ch;
                if (ch >= 97 && ch <=122)
                {
                    cout << ch;
                }
            }
            
        }
        cout << "\n";
        
    }
    
    return 0;
}