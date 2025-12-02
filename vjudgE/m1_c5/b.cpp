#include<bits/stdc++.h>

int main() {
    long long h,w;
    scanf("%lld %lld",&h,&w);
    long long arr[w][h];
    for (int i = 0; i < h; i++)
    {
        /* code */
        for (int j = 0; j < w; j++)
        {
            long long num;
            scanf("%lld",&num);
            arr[j][i]=num;
        }
        
    }

    for (int i = 0; i < w; i++)
    {
        /* code */
        for (int j = 0; j < h; j++)
        {
            /* code */
            printf("%lld ",arr[i][j]);
        }
        printf("\n");
        
    }
    
    
    return 0;
}