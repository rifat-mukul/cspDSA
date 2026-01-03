#include<bits/stdc++.h>

int compare(int a,int b) {
    if (a>b)
    {
        return a;
    } else {
        return b;
    }
    
}

int main() {
    int a=9,b=7,x=0,y=7;
    printf("%d\n",compare(a,b));
    printf("%d\n",compare(x,y));
    return 0;
}