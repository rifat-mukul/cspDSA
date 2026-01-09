#include <stdio.h>

int main() {
    int q;
    // Using scanf return check is a good practice for competitive programming
    if (scanf("%d", &q) != 1) return 0;

    while (q--) {
        int n;
        if (scanf("%d", &n) != 1) break;

        // Use n+1 to account for the null terminator \0
        char s[n + 1], t[n + 1], u[n + 1];
        scanf("%s", s);
        scanf("%s", t);
        scanf("%s", u);

        // CORRECT SHIFT CALCULATION:
        // (t[0] - s[0] + 26) % 26 handles both positive and negative differences
        int diff = (t[0] - s[0] + 26) % 26;

        for (int i = 0; i < n; i++) {
            // CORRECT CHARACTER WRAPPING:
            // 1. Subtract 'a' to get 0-25 range
            // 2. Add the shift (diff)
            // 3. Modulo 26 to wrap around (circular shift)
            // 4. Add 'a' back to return to ASCII range
            char shifted_char = ((u[i] - 'a' + diff) % 26) + 'a';
            printf("%c", shifted_char);
        }
        printf("\n");
    }

    return 0;
}