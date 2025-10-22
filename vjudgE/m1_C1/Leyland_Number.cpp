#include <stdio.h>
#include <math.h>

int main() {
    int a,b,v;
    scanf("%d%d",&a,&b);
    v = pow(a, b) + pow(b,a);
    printf("%d\n",v);
    return 0;
}