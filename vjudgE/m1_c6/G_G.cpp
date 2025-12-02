#include<bits/stdc++.h>

int main() {
    char arr[16];
    scanf("%s",arr);
    bool flaf=true;
    for (int i = 1; i < 16; i+=2)
    {
        /* code */
        if (toascii(arr[i]) ==49)
        {
            /* code */
            printf("No\n");
            flaf=false;
            break;
        }
        // printf("%d\n",toascii(arr[i]));
        
    }
    if (flaf)
    {
        /* code */
        printf("Yes\n");
    }
    
    
    return 0;
}