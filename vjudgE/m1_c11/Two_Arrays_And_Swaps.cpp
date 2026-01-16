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
        int n, k;
        cin >> n >> k;
        int arrA[n], arrB[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arrA[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arrB[i];
        }
        sort(arrA, arrA + n);
        sort(arrB, arrB+n);
        reverse(arrB, arrB + n);
        int accum = 0;
        for (int i = 0; i < k; i++) {
            if (arrA[accum] < arrB[i]) {
                arrA[accum] = arrB[i];
                accum++;
            }
        }
        int sm = 0;
        for (int i = 0; i < n; i++) {
            sm += arrA[i];  
        }

        cout << sm << "\n";
        
    }
    
    return 0;
}