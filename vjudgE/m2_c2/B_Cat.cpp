#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;  
    
    string s;
    cin >> s;  
    
    for (int i = 0; i < s.length() - 1; i++) {
        // Check for "na"
        if (s[i] == 'n' && s[i + 1] == 'a') {
            s.replace(i, 2, "nya");  // Replace "na" with "nya"
            i += 2; 
            // cout << s << "\n";
        }
    }

    cout << s << "\n";  // Output the modified string
    
    return 0;
}