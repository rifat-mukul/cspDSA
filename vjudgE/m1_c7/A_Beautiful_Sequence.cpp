#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int n;
        scanf("%d",&n);
        int val;
        bool isBeautiful=false;
        for (int i = 1; i <=n; i++)
        {
            /* code */
            scanf("%d",&val);
            if (val<=i)
            {
                /* code */
                isBeautiful=true;
            }
            
        }
        if (isBeautiful)
        {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        
        
        

    }
    
    return 0;
}