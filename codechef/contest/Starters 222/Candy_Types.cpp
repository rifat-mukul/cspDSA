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
        int arr[n]={0};
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr[x-1]++; 
        }

        int most=INT_MIN ,mst_irx=0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]>most){
                most=arr[i];
                mst_irx=i;
            }
        }
        cout << mst_irx+1 << endl;
        
    }
    
    return 0;
}