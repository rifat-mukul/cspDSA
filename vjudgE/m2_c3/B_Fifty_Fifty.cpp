#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    map<char,int> cnt;
    char c;
    for (int i = 0; i < 4; i++)
    {
        /* code */
        cin >> c;
        cnt[c]++;
    }

    if (cnt.size() == 2) {
        auto it1 = cnt.begin();
        auto it2 = cnt.begin();
        it2++;
        if (it1->second == 2 && it2->second==2)
        {
            cout << "Yes" << "\n";
        }
        else
        {
            cout << "No" << "\n";
        }
        
    } else
    {
        cout << "No" << "\n";
    }
    

    
    return 0;
}