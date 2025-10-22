#include <bits/stdc++.h>

int main() {
    int n;
    scanf("%d",&n);
    if (n < 3)
    {
        printf("GOLD\n");
    } else if (n >= 3 and n < 6)
    {
         printf("SILVER\n");
    } else
     {
        printf("BRONZE\n");
    }
    
    return 0;
}