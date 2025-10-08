#include <stdio.h>

int main() {
    int x, l, j, r, k;
    scanf("%d%d", &x,&l);
    r = x - (l * 10);
    k = r / 20;
    printf("%d\n",k);
    return 0;
}