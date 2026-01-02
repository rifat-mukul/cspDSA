#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int x[n], y[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    for (int i = 0; i < n; i++) {
        long long maxSqDis = -1; 
        int bestPointID = -1;

        for (int j = 0; j < n; j++) {
            if (i == j) continue;

            long long dx = x[i] - x[j];
            long long dy = y[i] - y[j];
            long long sqDis = dx * dx + dy * dy;

            if (sqDis > maxSqDis) {
                maxSqDis = sqDis;
                bestPointID = j + 1; 
            }
            
        }
        printf("%d\n", bestPointID);
    }

    return 0;
}