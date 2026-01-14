#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    int zC=0, minC=100001;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int num;
        cin >> num;
        if (num < 0)
        {
            /* code */
            num*=(-1);
        }
        int x = num-0;
        if (x < minC)
        {
            /* code */
            minC=x;
        }
        
        
    }

    cout << minC << "\n";
    
    
    
    return 0;
}