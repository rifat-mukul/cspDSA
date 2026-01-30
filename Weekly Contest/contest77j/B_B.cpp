#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while (t--)
    {
        int x,y;
        long long r;
        cin >> x >> y >> r;
        long double restlt = ((double)x + (r/30))/y;
        cout << ceil(restlt) << "\n";
    }
    
    return 0;
}