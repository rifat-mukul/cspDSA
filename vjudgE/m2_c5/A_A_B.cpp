#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    while (cin >> n && cin >> m)
    {
        set<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.insert(x);
        }
        for (int i = 0; i < m; i++)
        {
            /* code */
            int x;
            cin >> x;
            a.insert(x);
        }

        for(int elem : a) {
            cout << elem << " ";
        }
        cout << "\n";
        
        
        
    }
    
    return 0;
}