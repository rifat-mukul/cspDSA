#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());

        int max_streak = 0, current_streak = 0;
        for (int i = 0; i < a.size(); i++) {
            if (i > 0 && a[i] == a[i - 1] + 1) current_streak++;
            else current_streak = 1;
            max_streak = max(max_streak, current_streak);
        }
        cout << (n == 0 ? 0 : max_streak) << endl;
    }
    return 0;
}