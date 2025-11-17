#include <bits/stdc++.h>

int main() {
    long long n;
    scanf("%lld",&n);
    long long arr[n+1];
    long long resultArr[n+1]={false};
    for (int i = 1; i < n+1; i++)
    {
        /* code */
        scanf("%lld",&arr[i]);
    }

    // for (int i = 0; i < n+1; i++)
    // {
    //     /* code */
    //     printf("%lld\n", arr[i]);
    // }
    long long count=0;
    for (int i = 1; i < n+1; i++)
    {
        /* code */
        if (resultArr[i]==false && resultArr[arr[i]]==false)
        {
            /* code */
            resultArr[arr[i]]=true;
            count++;
        }
        
    }
    printf("%lld\n",n-count);

    for (int i = 1; i < n+1; i++)
    {
        /* code */
        if (resultArr[i]==false)
        {
            /* code */
            printf("%lld ",i);
        }
        
    }
    printf("\n");

    return 0;
}