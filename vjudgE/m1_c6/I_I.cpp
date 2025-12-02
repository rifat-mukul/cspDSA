#include<bits/stdc++.h>

int main() {
    char arr[100];
    scanf("%s",arr);
    int ln=strlen(arr);
    for (int i = 0; i < ln; i++)
    {
        /* code */
        if (arr[i]!='a' && arr[i]!='e' && arr[i]!='i' && arr[i]!='o' && arr[i]!='u')
        {
            /* code */
            printf("%c",arr[i]);
        }
        // printf("%c",arr[i]);
    }
    printf("\n");
    
    return 0;
}