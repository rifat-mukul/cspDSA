#include<bits/stdc++.h>

int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    for (int i = 0; i < n; i++)
    {
        /* code */
        int num;
        scanf("%d",&num);
        if (num%k==0)
        {
            /* code */
            printf("%d ",num/k);
        }
        
    }
    printf("\n");
    return 0;
}