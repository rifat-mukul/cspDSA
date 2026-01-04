#include<bits/stdc++.h>

int main() {
    int n;
    scanf("%d",&n);
    // int arr[n];
    int count=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int num;
        scanf("%d",&num);
        count+=abs(num);
        
    }
    printf("%d\n",count);

    return 0;
}