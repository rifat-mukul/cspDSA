#include<bits/stdc++.h>

int main() {
    long long l,r;
    char arr[999999];
    scanf("%lld %lld",&l,&r);
    scanf("%s",arr);
    int ln=strlen(arr);
    for (int i = 0; i < l-1; i++)
    {
        /* code */
        printf("%c",arr[i]);
    }
    for (int i = r-1; i >=l-1; i--)
    {
        /* code */
        printf("%c",arr[i]);
    }
    for (int i = r; i < ln; i++)
    {
        /* code */
        printf("%c",arr[i]);
    }
    printf("\n");
    
    return 0;
}