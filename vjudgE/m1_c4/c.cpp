#include <bits/stdc++.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int ttlScore[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ttlScore[i]);
    }

    // int slvPrm[m];
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", ttlScore[i]);
    // }
    
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        int pos;
        scanf("%d",&pos);
        // printf("%d\n",ttlScore[pos-1]);
        count = count +  ttlScore[pos-1];
    }

    printf("%d\n",count);
    
    
    return 0;
}