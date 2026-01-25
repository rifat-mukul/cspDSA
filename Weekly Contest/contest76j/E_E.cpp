#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    int arr[n] = {0};
    for (int i = 0; i < q; i++)
    {
        /* code */
        int num;
        cin >> num;
        arr[num-1]++;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     cout << arr[i] << "\n";
    // }
    
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i]==1)
        {
            /* code */
            count++;
        } else if (arr[i] > 1 && arr[i]%2!=0)
        {
            count ++;
        }
        
        
    }
    cout << n-count << "\n";
    
    
    return 0;
}