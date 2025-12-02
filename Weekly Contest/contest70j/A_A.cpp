#include<bits/stdc++.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    int num = a+b+(a*b);
    if (num == 111)
    {
        /* code */
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}