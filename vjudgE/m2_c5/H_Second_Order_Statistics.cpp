#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    set<int>s;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int num;
        cin >> num;
        s.insert(num);
    }

    auto it = s.begin();
    ++it;

    if (it != s.end())
    {
        cout << *it << "\n";
    } else
    {
        cout << "NO" << "\n";
    }
    
    

    

    
    return 0;
}