#include <bits/stdc++.h>

int main() {
    int n;
    scanf("%d",&n);
    int arrST[n*7];
    
    for (int i = 0; i < n*7; i++)
    {
        long long a;
        scanf("%lld",&a);
        arrST[i] = a;
    }

    int arr_length = sizeof(arrST) / sizeof(arrST[0]);
    
    for (int i = 0; i < arr_length; i=i+7)
    {
        long long count = 0;
        for (int j = i; j < i+7; j++)
        {
            count+=arrST[j];
        }
        printf("%lld ",count);
        
    }
    printf("\n");
    
    
    return 0;
}