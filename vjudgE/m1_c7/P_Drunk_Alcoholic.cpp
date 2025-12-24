#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int k;
        scanf("%d",&k);
        int dis=0;
        for (int i = 1; i <=k; i++)
        {
            /* code */
            if (i%2==0)
            {
                /* code */
                dis--;
            } else {
                dis+=3;
            }
            
        }
        printf("%d\n",dis);
        
    }
    
    return 0;
}