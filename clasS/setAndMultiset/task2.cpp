#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    multiset<int> ms;

    for (int i = 0; i < 5; i++)
    {
        /* code */
        ms.insert(i);
    }

    for(auto it:ms) {
        cout << it << "\n";
    }

    ms.insert(3);
    cout << "===================" << "\n";

    for(auto it:ms) {
        cout << it << "\n";
    }
    
    if (ms.find(2) != ms.end())
    {
        ms.erase(2);
    }
    cout << "===================" << "\n";

    for(auto it:ms) {
        cout << it << "\n";
    }
    
    return 0;
}