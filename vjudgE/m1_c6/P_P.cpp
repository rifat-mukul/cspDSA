#include<bits/stdc++.h>

int main() {
    int n;
    scanf("%d",&n);
    char arr[n];
    scanf("%s",arr);
    bool flag=true;
    for (int i = 0; i < n-1; i++)
    {
        /* code */
        if (arr[i]==arr[i+1])
        {
            /* code */
            printf("No\n");
            flag=false;
            break;
        }
        
    }
    if (flag)
    {
        /* code */
        printf("Yes\n");
    }
    
    
    return 0;
}