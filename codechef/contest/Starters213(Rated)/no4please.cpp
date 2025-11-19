#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int strArr[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &strArr[i]);
        }

        int count[4] = {0}; 
        for (int i = 0; i < n; i++) {
            count[strArr[i]]++;
        }

        int rmv = 0;

        rmv += min(count[1], count[3]);
        
        if (count[2] > 1) {
            rmv += count[2] - 1;
        }

        printf("%d\n", rmv);
    }
    
    return 0;
}
