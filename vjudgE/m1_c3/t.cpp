#include<bits/stdc++.h>


int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,rt;
        scanf("%d%d",&n,&rt);
        int unrt = (2*n) - rt;
        int pair = rt - unrt;
        if (pair <=0)
        {
            /* code */
            printf("0\n");
        } else {
            printf("%d\n",pair);
        }
        
    }
    
    return 0;
}
