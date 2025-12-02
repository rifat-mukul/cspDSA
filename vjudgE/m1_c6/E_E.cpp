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
        if ((arr[i]=='a' && arr[i+1]=='b') || (arr[i]=='b' && arr[i+1]=='a'))
        {
            /* code */
            printf("Yes\n");
            flag=false;
            break;
        }
        
    }
    if (flag)
    {
        /* code */
        printf("No\n");
    }
    
    
    return 0;
}