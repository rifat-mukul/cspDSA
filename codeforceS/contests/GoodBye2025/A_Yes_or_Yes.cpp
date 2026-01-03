#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[101];
        scanf("%s", s);
        int yCount = 0;
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == 'Y') {
                yCount++;
            }
        }
        if (yCount <= 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}