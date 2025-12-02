#include<bits/stdc++.h>

int main() {
    char arr[99999];
    scanf("%s",arr);
    bool flag=true;
    int ln=strlen(arr);
    for (int i = 0; i < ln-1; i++)
    {
        /* code */
        if (arr[i]<=arr[i+1])
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