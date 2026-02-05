#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    bool notFound=true;
    for (int i = 0; i < s1.size(); i++)
    {
        /* code */
        char c1, c2;
        c1 = tolower(s1[i]);
        c2 = tolower(s2[i]);
        if (c1>c2)
        {
            cout << 1 << "\n";
            notFound=false;
            break;
        } else if (c1<c2)
        {
            /* code */
            cout << -1 << "\n";
            notFound=false;
            break;
        }
        
        
    }

    if (notFound)
    {
        cout << 0 << "\n";
    }
    
    
    return 0;
}