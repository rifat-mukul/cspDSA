#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int x;
        scanf("%d",&x);
        if (x%2==0)
        {
            /* code */
            if (x%4==0)
            {
                /* code */
                printf("North\n");
            } else {
                printf("South\n");
            }
            
        } else {
            for (int i = 1,j=3; i <=1000,j<=1000; i+=4,j+=4)
            {
                /* code */
                if (i==x)
                {
                    /* code */
                    printf("East\n");
                    break;
                } else if (j==x)
                {
                    /* code */
                    printf("West\n");
                    break;
                }
                
                
            }
            
        }
        
    }
    
    return 0;
}