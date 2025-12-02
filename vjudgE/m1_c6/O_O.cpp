#include<bits/stdc++.h>

int main() {
    int n,pc=0,sc=0;
    scanf("%d",&n);
    char arr[n], px[2];
    scanf("%s",arr);
    for (int i = 0; i < n; i++)
    {
        if (arr[i]=='*')
        {
            /* code */
            sc=i;
        }
        if (arr[i]=='|')
        {
            /* code */
            px[pc]=i;
            pc++;
        }
        
    }
    if (sc >px[0] && sc<px[1])
    {
        /* code */
        printf("in\n");
    } else {
        printf("out\n");
    }
    
    
    return 0;
}