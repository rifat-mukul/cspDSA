#include<bits/stdc++.h>

int main() {
    int n;
    scanf("%d",&n);
    char ar1[n], ar2[n];
    scanf("%s",ar1);
    scanf("%s",ar2);
    int count=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (
            (ar1[i]==ar2[i]) ||
            (ar1[i]=='l'&&ar2[i]=='1') ||
            (ar1[i]=='1' && ar2[i]=='l') ||
            (ar1[i]=='0' && ar2[i]=='o') ||
            (ar1[i]=='o' && ar2[i]=='0')
        )
        {
            /* code */
            count++;
        }
        
    }
    if (count==n)
    {
        /* code */
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    
    return 0;
}