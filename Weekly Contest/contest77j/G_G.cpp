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
        int arr[n+1];
        int pos = 1;
        for (int i = n; i > 0; i--)
        {
            arr[pos] = i;
            pos++;
        }

        for (int i = 1; i <= n; i++)
        {
            if (arr[i] == i)
            {
                swap(arr[i], arr[i-1]);
                // cout << arr[i] << " " << i <<  "\n";
            }
            
            // cout << arr[i] << " ";
        }

        for (int i = 1; i <=n; i++)
        {
            /* code */
            cout << arr[i] << " ";
        }
        
        cout << "\n";
        
        
    }
    
    return 0;
}