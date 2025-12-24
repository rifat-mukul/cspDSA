#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        bool a=false,b=false;
        for (int i = 0; i < 3; i++)
        {
            /* code */
            int x;
            scanf("%d",&x);
            if (x==0)
            {
                /* code */
                a=true;
            } else if (x==1)
            {
                /* code */
                b=true;
            }
            
            
        }
        if (a && b)
        {
            /* code */
            printf("%d\n",1);
        } else {
            printf("%d\n",0);
        }
        
    }
    
    return 0;
}