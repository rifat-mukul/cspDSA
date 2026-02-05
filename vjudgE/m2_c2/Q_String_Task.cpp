#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string ch;
    cin >> ch;
    // int num = ch.size();
    // vector<string>sh;
    for (int i = 0; i < ch.size(); i++)
    {
        char low = tolower(ch[i]);

        if (low!='a' && low !='e' && low != 'i'
            && low != 'o' && low != 'u' && low != 'y'
        )
        {
            cout << '.' << low;
        }
        
        
    }
    cout << "\n";
    
    return 0;
}