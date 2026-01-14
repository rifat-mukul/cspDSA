#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        /* code */
        cin >> arr[i];
    }
    sort(arr, arr+m);

    // for (int i = 0; i < m; i++)
    // {
    //     /* code */
    //     cout << arr[i] << " ";
    // }
    
    // int arr2[m-n-1];
    int min=10000;
    for (int i = 0; i+(n-1)<m; i++)
    {
        int num=arr[i+n-1] - arr[i];
        if (num<min)
        {
            /* code */
            min=num;
        }
        

    }

    cout << min << "\n";
    
    return 0;
}