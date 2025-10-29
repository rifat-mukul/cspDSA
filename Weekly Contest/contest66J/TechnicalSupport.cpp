#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);  
        char c[n + 1];  
        getchar();  
        scanf("%s", c);  
        int len = strlen(c);
        char lastWord = c[len - 1];
        
        if (lastWord == 'A') { 
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    
    return 0;
}
