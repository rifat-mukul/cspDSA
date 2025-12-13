#include<bits/stdc++.h>

int main() {
    int n;
    scanf("%d",&n);
    char arr[n],temp;
    scanf("%s",arr);
    scanf("%c",&temp);
    int carCount=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i]>=97 && arr[i] <=122)
        {
            carCount++;
        }
        
    }
    
    for (int i = 0; i < n-carCount; i++)
    {
        /* code */
        printf("o");
    }
    for (int i = 0; i < carCount; i++)
    {
        /* code */
        printf("%c",arr[i]);
    }
    printf("\n");
    return 0;
}