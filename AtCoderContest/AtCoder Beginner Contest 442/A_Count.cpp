#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int count = 0;
    for(auto& it : s) {
        if (it == 'i' || it == 'j')
        {
            count++;
        }
        
    }
    cout << count << "\n";
    return 0;
}