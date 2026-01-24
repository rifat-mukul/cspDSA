#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    vector<int>v(t);
    for (int i = 0; i < t; i++) {
        cin >> v[i];
    }
    int sereja = 0, dima = 0;
    int l = 0, r = t - 1;
    bool turn = true; // true for Sereja's turn, false for Dima
    while (l <= r) {
        if (v[l] > v[r]) {
            if (turn) {
                sereja += v[l];
            } else {
                dima += v[l];
            }
            l++;
        } else {
            if (turn) {
                sereja += v[r];
            } else {
                dima += v[r];
            }
            r--;
        }
        turn = !turn; // switch turns
    }
    cout << sereja << " " << dima << "\n";
    return 0;
}