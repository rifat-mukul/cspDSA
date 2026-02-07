#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n,k;
    cin >> n>>k;
    // cout << k << "\n";
    int count = 0;
    for (long long i = 1; i <=n; i++)
    {
        /* code */
        string strNum = to_string(i);
        int sumNum = 0;
        for (int j = 0; j < strNum.size(); j++)
        {
            /* code */
            int numx = strNum[j] - '0';
            sumNum+=numx;
        }
        // cout << k << "\n";
        if (sumNum == k)
        {
            /* code */
            count++;
            // cout << sumNum << "\n";
        }
        
        
    }

    cout << count << "\n";
    
    return 0;
}