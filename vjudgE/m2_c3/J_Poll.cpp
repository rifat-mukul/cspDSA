#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    map<string,int> vC;
    long long n;
    cin >> n;
    string name;
    int maxC = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> name;
        vC[name] ++;
        maxC = max(vC[name], maxC);

    }
    for(auto it : vC) {
        if(it.second == maxC) cout << it.first << "\n";
    }
    
    
    return 0;
}