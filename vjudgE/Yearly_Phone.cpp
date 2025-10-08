#include <stdio.h>

int main() {
    int x,y;
    scanf("%d",&x);
    y = x % 100;
    if (y<10)
    {
        printf("k0%d\n",y);
    } else {
        printf("k%d\n",y);
    }
     
    return 0;
}