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
        int num;
        cin >> num;
        string s;
        cin >> s;
        for (int i = 0; i < num; i++)
        {
            s[i] = tolower(s[i]);
        }

        string newS;
        newS+=s[0];
        for (int i = 1; i < num; i++)
        {
            if (s[i] != s[i-1])
            {
                newS+=s[i];
            }
            
        }

        if (newS=="meow")
        {
            cout << "YES" << "\n";
        } else
        {
            cout << "NO" << "\n";
        }
        
        
        
        
    }
    
    return 0;
}