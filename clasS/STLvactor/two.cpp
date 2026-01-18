#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>vcT;
    // vcT.push_back(2);
    // vcT.push_back(3);
    // vcT.push_back(5);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vcT.push_back(x); 
    }
    for(int i = 0; i < vcT.size(); i++) {
        cout << vcT[i] << " ";
    }
    cout << "\n";

    for(auto x: vcT) {
        cout << x << " ";
    }
    cout << "\n";
    vcT.clear(); // remove all elements
    return 0;
}