#include <bits/stdc++.h>

int main() {
    int a, b;
    scanf("%d%d", &a,&b);
    if (a > b)
    {
        printf("New\n");
    } else if (a < b)
    {
        printf("Old\n");
    } else {
        printf("Same\n");
    }
    
    
    return 0;
}