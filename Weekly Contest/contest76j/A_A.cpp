#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,x,y;
    cin >> a >> b >> x >> y;
    int messi = a*2 + b;
    int cr = x * 2 +y;
    if (messi > cr)
    {
        /* code */
        cout << "Messi" << "\n";
    } else if (messi < cr)
    {
        /* code */
        cout << "Ronaldo" << "\n";
    } else
    {
        cout << "Equal" << "\n";
    }
    
    
    
    return 0;
}