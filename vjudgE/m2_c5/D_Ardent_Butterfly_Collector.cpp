#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n,m;
    cin >> n;
    set<int>s1,s2;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int num;
        cin >> num;
        s1.insert(num);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        /* code */
        int num;
        cin >> num;
        if (s1.find(num) != s1.end())
        {
            /* code */
            cout << "YES" << "\n";
        } else
        {
            cout << "NO" << "\n";
        }
        
        
    }
    
    
    return 0;
}