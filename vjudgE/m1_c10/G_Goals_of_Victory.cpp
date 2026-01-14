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
        int n;
        cin >> n;
        int count=0;
        for (int i = 0; i < n-1; i++)
        {
            /* code */
            int num;
            cin >> num;
            // cout << num << " ";
            count = count + num;
        }
        count*=(-1);
        cout << count << "\n";
    }
    
    return 0;
}