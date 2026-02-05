#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int required[] ={5,7,5};
    bool isHaiku=true;
    for (int i = 0; i < 3; i++)
    {
        /* code */
        string s;
        getline(cin, s);
        int vou=0;
        for(char c : s) {
            if (
                c == 'a' ||
                c == 'e' ||
                c == 'i' ||
                c == 'o' ||
                c == 'u'
            )
            {
                vou ++;
            }
            
        }
        if (vou!=required[i])
        {
            /* code */
            isHaiku=false;
        }
        
    }

    if (isHaiku)
    {
        cout << "YES" << "\n";
    } else
    {
        cout << "NO" << "\n";
    }
    
    
    
    return 0;
}