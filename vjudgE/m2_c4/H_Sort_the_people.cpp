#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<pair<string, string>,int>> p;
    for (int i = 0; i < n; i++)
    {
        /* code */
        string name, surname;
        int byear;
        cin >> name >> surname >> byear;
        p.push_back({{surname, name},-byear});
    }

    sort(p.begin(), p.end());

    for(auto [x,y] : p) {
        cout << x.second << " " << x.first <<" " << -y << "\n";
    }
    
    return 0;
}