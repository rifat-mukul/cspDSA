#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    if (n%5<3)
    {
        /* code */
        cout << n - (n%5) << "\n";
    } else
    {
        cout << n - (n%5) + 5 << "\n";
    }
    
    

    return 0;
}