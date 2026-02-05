#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin >> n >> k;
    vector<string>v;
    for (int i = 0; i < n; i++)
    {
        /* code */
        string sh;
        cin >> sh;
        v.push_back(sh);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << "\n";
    // }
    
    sort(v.begin(), v.begin()+k);

    for (int i = 0; i < k; i++)
    {
        cout << v[i] << "\n";
    }
    
    
    return 0;
}