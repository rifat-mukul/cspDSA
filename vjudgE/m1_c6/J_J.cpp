#include<bits/stdc++.h>

int main() {
    char pi[]="3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    int n;
    scanf("%d",&n);
    // printf("%d",strlen(pi));
    for (int i = 0; i < n+2; i++)
    {
        /* code */
        printf("%c",pi[i]);
    }
    printf("\n");
    return 0;
}