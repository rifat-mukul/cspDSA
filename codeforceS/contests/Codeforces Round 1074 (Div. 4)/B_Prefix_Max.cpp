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
        cin>>n;
        int arr[n];
        int mx=0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin>>num;
            arr[i]=num; 
            if(num>mx){
                mx=num;
            }
        }
        long long ans = mx*n;
        cout<<ans<<"\n";

            
    }
    
    return 0;
}