#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n,q;
    cin >> n >> q;
    vector<long long>v(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (long long i = 0; i < q; i++)
    {
        long long num;
        cin >> num;
        if (num==1)
        {
            long long num2;
            cin >> num2;
            swap(v[num2-1], v[num2]);
        } else if (num==2)
        {
            long long l,r;
            cin >> l >> r;
            long long count = 0;
            for (int i = l-1; i < r; i++)
            {
                count+=v[i];
            }
            cout << count << "\n";
            
        }
    }
    

    
    
    
    return 0;
}