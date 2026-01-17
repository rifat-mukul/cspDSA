#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a[105], b[105];
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i]; 
        }

        sort(b, b + n);

        bool case1 = true; 
        bool case2 = true; 
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (b[i] == a[j]) {
                    if (i % 2 != j % 2) case1 = false;
                    if (i % 2 == j % 2) case2 = false;
                    break;
                }
            }
        }

        if (case1 || case2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}