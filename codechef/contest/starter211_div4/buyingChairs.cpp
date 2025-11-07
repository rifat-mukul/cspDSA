#include <bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int w,p,k;
        scanf("%d%d%d",&w,&p,&k);
        int totalPoints= 0;
        if (w<=k)
        {
            /* code */
            if (w==k)
            {
                /* code */
                totalPoints=(w*2);
            } else {
                p = k -w;
                totalPoints = (w*2) + (p*1);
            }
  
        } else {
            
            totalPoints = k*2;
        }

        printf("%d\n",totalPoints);
        
    }
    
    return 0;
}