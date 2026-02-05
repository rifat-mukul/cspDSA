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
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (i%2==0)
            {
                if (s[i]=='a')
                {
                    cout << 'b';
                } else
                {
                    cout << 'a';
                }
                
                
            } else
            {
                if (s[i]=='z')
                {
                    cout<<'y';
                } else
                {
                    cout << 'z';
                }                
            }
            
        }
        cout << "\n";
        
    }
    
    return 0;
}