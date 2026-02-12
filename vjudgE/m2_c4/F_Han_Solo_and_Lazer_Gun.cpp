#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,x0,y0;
    cin >> n >> x0>>y0;
    set<pair<int, int>> st;

    for (int i = 0; i < n; i++)
    {
        /* code */
        int x,y;
        cin >> x >> y;
        int dx = x - x0;
        int dy = y - y0;
        int g = __gcd(dx,dy);
        st.insert({dy/g, dx/g});
    }
    cout << st.size() << "\n";
    
    return 0;
}