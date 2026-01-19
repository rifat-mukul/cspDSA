#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << v[i] << " ";
    }  
    cout <<  "\n";
    
    return 0;
}