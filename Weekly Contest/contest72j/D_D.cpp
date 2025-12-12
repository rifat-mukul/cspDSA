#include<bits/stdc++.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < n-1; i++)
    {
        /* code */
        printf("%d ",arr[i]*arr[i+1]);
    }
    printf("\n");
    return 0;
}