#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    scanf("%lld", &t);
    
    while (t--) {
        long long n, x;
        scanf("%lld %lld", &n, &x);
        
        long long arr[n];
        for (long long i = 0; i < n; i++) {
            scanf("%lld", &arr[i]);
        }
        
        sort(arr, arr + n);
        
        bool flag = true;
        
        for (long long i = 0; i < n - 1; i++) {
            if ((arr[i] < x && arr[i + 1] > x) || (arr[i] > x && arr[i + 1] < x)) {
                printf("No\n");
                flag = false;
                break;
            }
        }
        
        if (flag) {
            printf("Yes\n");
        }
    }

    return 0;
}
