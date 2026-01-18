#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // assign 
    vector<int>vcT;
    vcT = {1,2,3,4,5};
    vcT.assign(5,10); // size 5, all elements are 10
    for(int i = 0; i < vcT.size(); i++) {
        cout << vcT[i] << " ";
    }
    cout << "\n";
    return 0;
}