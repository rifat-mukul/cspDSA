#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int a1,b1,a2,b2;
        for (int i = 0; i < 4; i++)
        {
            /* code */
            int a,b;
            scanf("%d%d",&a,&b);
            if (i==0)
            {
                a1=a;
                b1=b;
            } else {
                if (a==a1)
                {
                    /* code */
                    a2=a;
                    b2=b;
                }
                
            }
            
        }
        // printf("%d %d --- %d %d\n",a1,b1,a2,b2);
        
        int rst = pow((a1-a2),2) + pow((b1-b2),2);
        printf("%d\n",rst);
    }
    
    return 0;
}