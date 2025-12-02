#include<bits/stdc++.h>

int main() {
    char st[100];
    scanf("%s",st);
    int ln=strlen(st);
    st[ln-1]='4';
    for (int i = 0; i < ln; i++)
    {
        printf("%c",st[i]);
    }
    printf("\n");
    return 0;
}