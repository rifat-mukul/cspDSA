#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin >> n >> k;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int x;
        cin >> x;
        v.push_back(x);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (v[i] >= v[k-1] && v[i] > 0)
        {
            count++;
        }
    }
    cout << count << "\n";  
    
    return 0;
}