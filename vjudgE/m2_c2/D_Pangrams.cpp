#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    getline(cin, s);
    // cout << s << "\n";
    int arr[26]={0};
    for (int i = 0; i < s.size(); i++)
    {   
        char ch=tolower(s[i]);
        arr[ch-'a']++;
    }

    bool ok = true;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] ==0)
        {
            cout << "not pangram" << "\n";
            ok=false;
            break;
        }
        
    }
    
    if (ok)
    {
        cout << "pangram" << "\n";
    }
    
    
    return 0;
}