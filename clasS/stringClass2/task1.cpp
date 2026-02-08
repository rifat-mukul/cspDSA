#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    map<string,int> scores;

    scores["Alice"] = 90;
    scores["Bob"] = 85;
    scores["Charlie"] = 92;

    for (auto const& [name, score] : scores) {
        cout << name << ": " << score << "\n";
    }
    return 0;
}