#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int rc=0;
        for (int i = 0; i < 7; i++)
        {
            /* code */
            int num;
            scanf("%d",&num);
            if (num==1)
            {
                /* code */
                rc++;
            }
            
        }
        if (rc>3)
        {
            /* code */
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        
        
    }
    
    return 0;
}