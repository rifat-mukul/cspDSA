#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        int n;
        if (scanf("%d", &n) != 1) continue;

        char arr[n][5]; 

        for (int i = 0; i < n; i++) {
            if (scanf("%s", arr[i]) != 1) break;
        }

        for (int i = n - 1; i >= 0; i--) {
            for (int j = 0; j < 4; j++) {
                if (arr[i][j] == '#') { 
                    printf("%d ", j + 1);
                    break; 
                }
            }
        }
        
        printf("\n");
    }

    return 0;
}