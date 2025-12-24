#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int n;
        scanf("%d",&n);
        if (n<10)
        {
            /* code */
            printf("7\n");
        } else if (n%7==0)
        {
            /* code */
            printf("%d\n",n);
        } else {
            n=n/10;
            n=n*10;
            for (int i = n; i <n+10; i++)
            {
                /* code */
                if (i%7==0)
                {
                    /* code */
                    printf("%d\n",i);
                    break;
                }
                
            }
            
        }
        
        
        
    }
    
    return 0;
}