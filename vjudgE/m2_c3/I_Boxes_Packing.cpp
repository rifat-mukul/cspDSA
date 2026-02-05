#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    map<int, int>boxCount;
    int maxCount=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        long long x;
        cin >> x;
        boxCount[x]++;
        maxCount = max(maxCount,boxCount[x]);

    }

    cout << maxCount << "\n";
    
    return 0;
}