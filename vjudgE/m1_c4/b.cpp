#include <bits/stdc++.h>

int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int strArr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&strArr[i]);
    }
    int endStk[n];
    int count = n-k;
    for (int i = 0; i < k; i++)
    {
        endStk[i] = strArr[count];
        count++;
    }
    int c2=k;
    for (int i = 0; i < n-k; i++)
    {
        /* code */
        endStk[c2] = strArr[i];
        c2++;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",endStk[i]);
    }
    printf("\n");
    
    
    
    return 0;
}