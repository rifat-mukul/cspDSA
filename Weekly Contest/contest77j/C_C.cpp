#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while (t--)
    {
        /* code */
        long long n;
        cin >> n;
        long long arr[n] ={0};
        long long cM=0, lM=0;
        for (long long i = 0; i <n; i++)
        {
            /* code */
            long long num;
            cin >> num;

            if (arr[num-1]==0)
            {
                lM++;
                arr[num-1]=1;
            } else if (arr[num-1]==1)
            {
                lM--;
                arr[num-1]=0;
            }
            if (lM>cM)
            {
                cM=lM;
            }
            
            
        }
        cout << cM << "\n";
        
        
    }
    
    return 0;
}