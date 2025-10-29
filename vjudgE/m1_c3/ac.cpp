#include <bits/stdc++.h>

int main() {
    int n,k,m,a;
    int total=0;
    scanf("%d%d%d",&n,&k,&m);
    for (int i = 0; i < n-1; i++)
    {
        scanf("%d",&a);
        total+=a;
    }
    
    int obtainMark = (n*m) - total;
    if (obtainMark > k)
    {
        printf("%d\n",-1);
    } else if (obtainMark < 0)
    {
        printf("0\n");
    } else {
        printf("%d\n",obtainMark);
    }
    
    
    return 0;
}