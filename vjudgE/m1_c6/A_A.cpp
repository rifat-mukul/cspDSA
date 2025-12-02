#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t); 
    while (t--) {
        char wr[4]; 
        scanf("%s", wr); 
        for (int i = 0; i < 3; i++) {
            wr[i] = tolower(wr[i]);
        }

        if (strcmp(wr, "yes") == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
