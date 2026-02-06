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
        if ((n-1)%2==0)
        {
            /* code */
            cout << 1 << " " << (n-1)/2 << " "<<(n-1)/2 << "\n";
        } else
        {
            int x = 1;
            while (true)
            {
                /* code */
                if ((n-x)%2==0)
                {
                    /* code */
                    break;
                } else
                {
                    x++;
                }
                
                
            }
            if (x%2==0 && ((n-x)/2)%2==0)
            {
                /* code */
                cout << x+2<<" "<<((n-1)/2)-1<<" "<<((n-1)/2)-1 << "\n";
            } else
            {
                cout << x << " "<<(n-x)/2<<" "<<(n-x)/2 << "\n";
            }
            
            
        }
        
        
    }
    
    return 0;
}