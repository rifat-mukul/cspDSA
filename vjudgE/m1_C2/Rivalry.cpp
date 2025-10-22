#include <bits/stdc++.h>

int main() {
    int a, b,c,d, e, f;
    scanf("%d%d", &a,&b);
    scanf("%d%d", &c,&d);
    e = a + c;
    f = b + d;
    if (e > f)
    {
        printf("Dominater\n");
    } else {
        printf("Everule\n");
    }
    return 0;
}