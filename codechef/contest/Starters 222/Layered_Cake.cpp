#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int N, M;
    if (!(cin >> N >> M)) return;

    vector<int> A(N);
    vector<int> B(M);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (B[j] < A[i]) {
                count++;
            }
        }
    }

    cout << count << endl;
}

int main() {
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        solve();
    }
    return 0;
}