#include <bits/stdc++.h>

int main() {
    char a, b, c, d, temp;
    scanf("%c%c%c%c%c",&a,&b,&temp,&c,&d);
    int diff1 = abs(a-b);
    if (diff1 > 2) diff1 = 5 - diff1;
    int diff2 = abs(c-d);
    if (diff2 > 2) diff2 = 5-diff2;
    if (diff1 == diff2)
    {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}