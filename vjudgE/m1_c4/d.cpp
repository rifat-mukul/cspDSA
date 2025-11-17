#include <bits/stdc++.h>

int main() {
    int n;
    long long d;
    scanf("%d %lld",&n,&d);
    int arrSrt[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%lld",&arrSrt[i]);
    }
    bool flag=false;
    long long num=0;
    for (int i = 1; i < n; i++)
    {
        if (arrSrt[i] - arrSrt[i-1] <= d)
        {
            /* code */
            flag=true;
            num=arrSrt[i];
            break;
        }
        
    }
    if (flag)
    {
        printf("%lld\n",num);
    } else {
        printf("-1\n");
    }
    
    
    

    return 0;
}