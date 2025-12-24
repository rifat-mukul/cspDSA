#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        char arr[4];
        scanf("%s",arr);
        if (strcmp(arr,"bca")==false)
        {
            printf("NO\n");
        } else if (strcmp(arr, "cab")==false)
        {
            /* code */
            printf("NO\n");
        } else {
            printf("YES\n");
        }
        
        
        
    }
    
    return 0;
}