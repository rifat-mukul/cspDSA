#include<bits/stdc++.h>

void compare(int a,int b) {
    if (a>b)
    {
        /* code */
        printf("%d\n",a);
    } else {
        printf("%d\n",&b);
    }
    
}

int sum(int a, int b) {
    return a+b;
}


int main() {
    int a=15,b=4;
    compare(a,b);
    printf("Sum is : %d\n",sum(a,b));
    return 0;
}