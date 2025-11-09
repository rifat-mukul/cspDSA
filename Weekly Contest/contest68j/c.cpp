#include <stdio.h>

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

        bool isAPFree = true;
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (strArr[j] - strArr[i] == strArr[k] - strArr[j]) {
                        isAPFree = false;
                        break;
                    }
                }
                if (!isAPFree) break;
            }
            if (!isAPFree) break;
        }

        if (isAPFree) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    
    return 0;
}
