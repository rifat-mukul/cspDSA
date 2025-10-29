#include<bits/stdc++.h>


int main() {
    int a,b,d;
    scanf("%d%d%d",&a,&b,&d);
    for (int i = a; i < b+1; i =i+d)
    {
        printf("%d ",i);
    }
    printf("\n");
    
    return 0;
}
