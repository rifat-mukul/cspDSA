#include <bits/stdc++.h>

int main() {
    int a, b,c,d;
    scanf("%d%d%d%d", &a,&b,&c,&d);
    int m = (a*2) + b;
    int r = (c* 2) + d;
    if (m > r)
    {
       printf("Messi\n");
    } else if (m < r)
    {
        printf("Ronaldo\n");
    } else {
        printf("Equal\n");
    }
    
    
    return 0;
}