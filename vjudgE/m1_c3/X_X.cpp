#include <bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x;
        scanf("%d",&x);
        double rst = ((double)x * .2);
        // if (rst == 0)
        // {
        //     rst=1;
        // }
        
        int ssl =(int) ((double) 100/rst);
        if (rst*ssl == 100)
        {
            printf("%d\n",ssl);
        } else {
            printf("%d\n",ssl+1);
        }
    }
    
    return 0;
}