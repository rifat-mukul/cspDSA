#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string str = "ADSRTUHGDG";
    cout << str << "\n";
    for(auto& it : str) it = tolower(it);
    cout << str << "\n";
    return 0;
}