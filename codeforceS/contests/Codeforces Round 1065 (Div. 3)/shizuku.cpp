#include <bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int divC=0;
        int n;
        scanf("%d",&n);

        if (n%2==0)
        {
            if (n<4)
            {
                /* code */
                divC++;
            } else {
                for (int i = 0; i <= n/4; i++)
                    {
                        /* code */
                        for (int j = 0; j <= n/2; j++)
                        {
                            /* code */
                            if ((i*4+j*2)==n)
                            {
                                /* code */
                                divC++;
                            }
                            
                        }
                        
                    }
            }
            
        }
        
        
        printf("%d\n",divC);
        
    }
      
    return 0;
}