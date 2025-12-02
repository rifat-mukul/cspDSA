#include<bits/stdc++.h>

int main() {
    char arr[10];
    scanf("%s",arr);
    int ln=strlen(arr);
    for (int i = 0; i < ln; i++)
    {
        /* code */
        if (arr[i]=='0')
        {
            /* code */
            // arr[i]='1';
            printf("1");
        } else if (arr[i]=='1')
        {
            /* code */
            // arr[i]='0';
            printf("0");
        }
        
        
    }
    printf("\n");
    return 0;
}