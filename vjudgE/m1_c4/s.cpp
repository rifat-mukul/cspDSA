#include <bits/stdc++.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int sm=0;
    for (int i = 0; i < n; i++)
    {   
        long long num;
        scanf("%lld",&num);
        printf("%lld ",num-sm);
        // arr[i] = num-sm;
        sm=num;
        // printf("%lld ",num-sm);
    }
    printf("\n");
    // int newArr[n];
    // int sun=0;
    
    return 0;
}