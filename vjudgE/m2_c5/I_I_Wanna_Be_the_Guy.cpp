#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;  
    int p;
    cin >> p;  
    set<int> s1;
    for (int i = 0; i < p; i++) {
        int num;
        cin >> num;
        s1.insert(num);  
    }

    int q;
    cin >> q; 
    set<int> s2;
    for (int i = 0; i < q; i++) {
        int num;
        cin >> num;
        s2.insert(num);  
    }

    s1.insert(s2.begin(), s2.end());  

    if (s1.size() == n) {
        cout << "I become the guy." << "\n";
    } else {
        cout << "Oh, my keyboard!" << "\n";
    }

    return 0;
}
