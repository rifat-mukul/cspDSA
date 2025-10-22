#include <stdio.h>
#include <stdbool.h>

int main() {
    char s1, s2, temp, t1, t2;
    scanf("%c%c%c%c%c", &s1, &s2, &temp, &t1, &t2);

    int positions[256] = {0}; 
    positions['A'] = 0;
    positions['B'] = 1;
    positions['C'] = 2;
    positions['D'] = 3;
    positions['E'] = 4;

    int diff1 = (positions[s1] - positions[s2] + 5) % 5;
    int diff2 = (positions[t1] - positions[t2] + 5) % 5;

    bool side1 = false;
    bool side2 = false;

    if (diff1 == 1 || diff1 == 4) { 
        side1 = true;
    }
    
    if (diff2 == 1 || diff2 == 4) { 
        side2 = true;
    }

    if (side1 == side2) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
