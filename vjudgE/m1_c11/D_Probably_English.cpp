#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;  

    string validWords[] = {"and", "not", "that", "the", "you"};  // Valid strings to compare

    string word;
    for (int i = 0; i < N; i++) {
        cin >> word;  
        // cout << word << "\n";
        for (int j = 0; j < 5; j++) {
            if (word == validWords[j]) {
                cout << "Yes\n";  
                return 0;
            }
        }
    }

    cout << "No\n"; 
    return 0;
}
