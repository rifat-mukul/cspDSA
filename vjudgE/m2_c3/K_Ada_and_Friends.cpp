#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long q,k;
    
    cin >> q >> k;
    map<string, long long> frLst;
    string name;
    long long cost = 0;
    vector <pair <long long , string >> sortedC;
    for (long long i = 0; i < q; i++)
    {
        cin >>  name >> cost;
        frLst[name] += cost;
    }

    for(auto p: frLst) {
        pair < long long, string> np = make_pair(p.second, p.first);
        sortedC.push_back(np);
    }

    sort(sortedC.begin(), sortedC.end());
    long long sav = 0;
    while (sortedC.size() && k)
    {
        sav+= sortedC.back().first;
        sortedC.pop_back();
        k--;
    }
    cout << sav << "\n";
    

    
    return 0;
}