#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        long long sum = a[n-1];
        for (long long i = n-2; i >=0; i--)
        {
            if (a[i] < a[n-1])
            {
                sum += a[i];
                cout << sum << "\n";
                break;
            }
        }
    }
    
    return 0;
}