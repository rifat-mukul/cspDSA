#include <stdio.h>

int main() {
    int d, f;
    if (scanf("%d %d", &d, &f) != 2) return 0;

    int remainder = d % 7;
    
    int next_day = f - remainder;
    
    if (next_day <= 0) {
        next_day += 7;
    }

    printf("%d\n", next_day);
    return 0;
}