#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while (true) {
        long long n, m;
        cin >> n >> m;

        if (n == 0 && m == 0) {
            break;
        }

        set<int> s;

        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            s.insert(num); 
        }

        long long count = 0;

        for (int i = 0; i < m; i++) {
            int num;
            cin >> num;
            if (s.find(num) != s.end()) { 
                count++;
            }
        }

        cout << count << "\n"; 
    }

    return 0;
}
