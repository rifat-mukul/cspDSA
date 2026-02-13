#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    long long arr[n], sm;
    for (int i = 0; i < n; i++)
    {
        /* code */
        long long num;
        cin >> num;
        arr[i] = num;
    }
    long long md = pow(10,8);

    for (long long i = 0; i < n-1; i++)
    {   
        long long x=0;
        for (long long j = i+1; j < n; j++)
        {
            x+=(arr[i] + arr[j])%md;
        }
        sm+=x;
        
    }
    
    cout << sm << "\n";
    
    return 0;
}