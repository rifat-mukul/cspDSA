#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int l,r;
        scanf("%d%d",&l,&r);
        int count=0;
        for (int i = l; i <= r; i++)
        {
            /* code */
            int num= i%10;
            if (num==2 || num==3 || num==9)
            {
                /* code */
                count++;
            }
            
        }
        printf("%d\n",count);
    }
    
    return 0;
}