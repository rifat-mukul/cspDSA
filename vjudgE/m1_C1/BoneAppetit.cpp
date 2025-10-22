#include <stdio.h>

int main() {
    int n, m, x, y, z;
    scanf("%d%d",&n, &m);
    scanf("%d%d",&x, &y);
    z = (n * x) + (m * y);
    printf("%d\n", z);
    return 0;
}