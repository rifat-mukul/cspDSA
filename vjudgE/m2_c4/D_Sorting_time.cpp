#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<int, pair<int,int>>> p;

    for (int i = 0; i < n; i++)
    {
        /* code */
        int h,m,s;
        cin >> h >> m >> s;
        p.push_back({h,{m,s}});
    }
    sort(p.begin(), p.end());
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << p[i].first << " " << p[i].second.first << " " << p[i].second.second << "\n";
    }
    
    
    return 0;
}