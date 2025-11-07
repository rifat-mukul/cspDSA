#include <bits/stdc++.h>

int main() {
    int k,gc,mc;
    scanf("%d%d%d",&k,&gc,&mc);
    int g= 0,m=0;
    while (k--)
    {
        /* code */
        if (g==gc)
        {
            g=0;
        } else if (m==0)
        {
            m = mc;
        } else {
            int demnd = gc-g;
            if (demnd>=m)
            {
                g=m;
                m=0;
            } else {
                g = gc;
                m=m-demnd;
            }
        } 
    }
    printf("%d %d\n",g,m);
    
    return 0;
}