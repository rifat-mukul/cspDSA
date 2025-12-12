#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int x,y;
        scanf("%d%d",&x,&y);
        int count=0;
        for (int i = y; i >=0; i--)
        {
            if (i-count==x)
            {
                printf("%d %d\n",i,count);
                break;
            }
            count++;
            
        }
        
    }
    
    return 0;
}