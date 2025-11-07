#include<bits/stdc++.h>


int main() {
    int n;
    int strArr[201];
    scanf("%d",&n);
    int orn=n;
    int i=0;
    while (n--)
    {
        strArr[i] = 10;
        i++;
    }
    strArr[i]=1;
    for (int i = 0; i <= orn; i++)
    {
        printf("%d",strArr[i]);
    }
    printf("\n");
    
    
    return 0;
}
