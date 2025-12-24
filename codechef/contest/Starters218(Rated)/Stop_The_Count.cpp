#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int n,way=0,chef=0,achef=0;
        scanf("%d",&n);
        char arr[n+1];
        scanf("%s",&arr);
        for (int i = 0; i < n; i++)
        {
            /* code */
            
            if (toascii(arr[i])==49)
            {
                /* code */
                chef++;
            } else {
                achef++;
            }
            if (chef>achef)
            {
                /* code */
                way++;
            }
            
            
        }
        printf("%d\n",way);
        // printf("\n");
    }
    
    return 0;
}