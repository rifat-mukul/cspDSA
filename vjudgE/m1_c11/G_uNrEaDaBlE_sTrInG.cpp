#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin >> s;
    int ln = s.length();
    bool isOK = true;

    if (ln == 1) {
        if (!islower(s[0])) {
            isOK = false;
        }
    } else {
        for (int i = 0; i < ln; i++) {  
            if (i % 2 == 0) {  
                if (!islower(s[i])) {  
                    isOK = false;
                    break;
                }
            } else {  
                if (!isupper(s[i])) {  
                    isOK = false;
                    break;
                }
            }
        }
    }

    if (isOK) {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
    }

    return 0;
}
