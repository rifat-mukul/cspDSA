#include <stdio.h>

int main() {
    long long t;
    scanf("%lld", &t);  
    while (t--) {
        char balls[6];  
        for (int i = 0; i < 6; i++) {
            scanf(" %c", &balls[i]);  
        }
        
        int hattrick = 0;  
        
        
        for (int i = 0; i < 4; i++) {  
            if (balls[i] == 'W' && balls[i + 1] == 'W' && balls[i + 2] == 'W') {
                hattrick = 1;  
                break; 
            }
        }
        
        if (hattrick) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
