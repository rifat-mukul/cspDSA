#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while (t--)
    {
        /* code */
        long long n;
        cin >> n;
        long long sum = 1;
        sum+= (n*(n+1))/2;
        sum+= ((n+1)*(n+2))/2;
        cout << sum << "\n";
    }
    
    return 0;
}