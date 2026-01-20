#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    vector<long long>v;
    for (long long i = 0; i < n; i++)
    {
        /* code */
        long long x;
        cin >> x;
        v.push_back(x);
    }
    long long a;
    cin >> a;
    v.erase(v.begin() + a - 1);
    long long b, c;
    cin >> b >> c;
    v.erase(v.begin() + b - 1, v.begin() + c - 1);
    cout << v.size() << "\n";
    for (long long i = 0; i < v.size(); i++)
    {
        /* code */
        cout << v[i] << " ";
    }   
    
    return 0;
}