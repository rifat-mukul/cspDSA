#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d%d", &x,&y);
        int mn;
        int a = 5 * x;
        int b = 1 *y + 3*x;
        int c = 2*y + 1*x;
        mn = min(a , min(b,c));
        printf("%d\n", mn);

    }
    
    return 0;
}