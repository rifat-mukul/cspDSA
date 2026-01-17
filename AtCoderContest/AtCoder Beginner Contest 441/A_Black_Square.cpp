#include <iostream>

using namespace std;

int main() {
    long long P, Q, X, Y;
    if (cin >> P >> Q >> X >> Y) {
        bool row_ok = (X >= P && X < P + 100);
        bool col_ok = (Y >= Q && Y < Q + 100);

        if (row_ok && col_ok) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}