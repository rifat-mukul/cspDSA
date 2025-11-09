#include <bits/stdc++.h>

int main() {
    char s[100];
    scanf("%s", s);          
    int len = strlen(s);
    if (s[0] !=s[1] && s[1] ==s[2])
    {
        printf("1\n");
    } else {
        for (int i = 0; i < len; i++) {
            if (s[i] != s[0]) {
                printf("%d\n", i + 1); 
                break;
            }
        }
    }
    
    
    
    
    return 0;
}
