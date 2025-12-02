#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);  
    while (t--) {
        char arr[4]; 
        scanf("%s", arr);  

        if ((arr[0] == 'a' && arr[1] == 'b' && arr[2] == 'c') || 
            (arr[0] == 'b' && arr[1] == 'a' && arr[2] == 'c') ||
            (arr[0] == 'a' && arr[1] == 'c' && arr[2] == 'b') ||
            (arr[0] == 'c' && arr[1] == 'b' && arr[2] == 'a')) {
            printf("YES\n"); 
        } else {
            printf("NO\n");  
        }
    }
    return 0;
}
