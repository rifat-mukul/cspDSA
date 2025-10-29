#include<bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    long long a;
    cin >> t; 
    while (t--) {
        cin >> n;  
        long long count = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> a;
            count += a;
        }

        if (count == n) {
            cout << "0\n";
        }
        else if (count < n) {
            cout << "1" << "\n";
        }
        else {
            cout << count - n << "\n";
        }
    }

    return 0;
}
