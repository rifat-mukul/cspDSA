#include <stdio.h>

int main() {
    int a, b, c, d, e;
    scanf("%d",&a);
    b = a/100; //1st digit
    c = a / 10;
    d = c % 10; //2nd digit
    e = a % 10; // 3rd digit
    //  a =   b        d      e
    int f = (d*100) + (b*10) +d; 
    int g = (e*100) + (e*10) +b; 
    int k = a + g + f;
    printf("%d\n", k);
    return 0;
}