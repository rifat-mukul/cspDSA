#include<bits/stdc++.h>

int main() {
    int n;
    scanf("%d",&n);
    char arr[n];
    scanf("%s",arr);
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%c%c",arr[i],arr[i]);
    }
    printf("\n");
    
    return 0;
}