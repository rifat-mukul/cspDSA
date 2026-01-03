#include<bits/stdc++.h>


int Pow(int a, int b) {
    int rst=1;
    for (int i = 0; i < b; i++)
    {
        rst*=a;
    }
    return rst;
}

int main() {
    int a=2,b=4;
    int c=Pow(a,b);
    printf("%d",c);
    return 0;
}