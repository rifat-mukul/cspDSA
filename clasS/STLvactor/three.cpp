#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>vcT = {1,2,3,4,5};
    cout << vcT.size() << "\n";
    for (int i = 0; i < vcT.size(); i++)
    {
        /* code */
        cout << vcT[i] << " ";
    }
    cout << "\n";
    
    vcT.reserve(10); // capacity at least 100
    cout << vcT.capacity() << "\n";


    for (int i = 0; i < vcT.capacity(); i++)
    {
        /* code */
        cout << vcT[i] << " ";
    }
    cout << "\n";
    
    vcT.resize(3); // size becomes 3
    cout << vcT.size() << "\n";
    for (int i = 0; i < vcT.size(); i++)
    {
        /* code */
        cout << vcT[i] << " ";
    }
    cout << "\n";
    
    return 0;
}