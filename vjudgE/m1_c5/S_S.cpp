#include<bits/stdc++.h>

int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    int count=1;
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < m; j++)
        {
            /* code */
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
    
    return 0;
}