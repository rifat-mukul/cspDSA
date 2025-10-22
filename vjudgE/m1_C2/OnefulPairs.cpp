#include <bits/stdc++.h>

int main() {
    int a, b;
    scanf("%d%d", &a,&b);
    int c = a + b + (a * b);
    if (c == 111)
    {
        printf("Yes\n");
    } else{
        printf("No\n");
    }
    

    return 0;
}