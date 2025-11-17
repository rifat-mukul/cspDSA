#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    

    scanf("%lld", &n);
    long long strArr[n];
    for (long long i = 0; i < n; i++) {
        scanf("%lld", &strArr[i]);
    }
    
    long long pos = strArr[0]; 
    
    for (long long i = 0; i < n - 1; i++) {
        if (strArr[i + 1] > strArr[i]) {
            pos = strArr[i + 1]; 
        } else {
            break; 
        }
    }
    
    
    printf("%lld\n", pos);
    
    return 0;
}
