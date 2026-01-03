#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int n;
        scanf("%d",&n);
        char arr[n];
        scanf("%s",&arr);
        bool ans=false;
        for (int i = 0; i < n; i++)
        {
            if (arr[i]== '0')
            {
                /* code */
                ans=true;
                break;
            }
            
        }
        if (ans)
        {
            /* code */
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        
        
    }
    
    return 0;
}