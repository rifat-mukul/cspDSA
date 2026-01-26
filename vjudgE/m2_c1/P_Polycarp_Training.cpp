#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    vector<long long>v(n);
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    long long day=1;
    for (long long i = 1; i < n; i++) {
        if (v[i] > day) {
            day++;
        }
    }
    cout << day << "\n";
    return 0;
}