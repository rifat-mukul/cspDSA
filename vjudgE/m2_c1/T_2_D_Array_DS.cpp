#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<vector<int>> V(6, vector<int>(6));
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> V[i][j];
        }
    }

    int max_sum = INT_MIN;

    for (int i = 0; i <= 3; i++) {
        for (int j = 0; j <= 3; j++) {
            int current_hourglass_sum = 
                V[i][j]   + V[i][j+1]   + V[i][j+2] + 
                            V[i+1][j+1]             + 
                V[i+2][j] + V[i+2][j+1] + V[i+2][j+2];

            if (current_hourglass_sum > max_sum) {
                max_sum = current_hourglass_sum;
            }
        }
    }

    cout << max_sum << "\n";
    return 0;
}