#include <bits/stdc++.h>

int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        int num;
        char c;
        int sx_c=0;
        int wt_c = 0;
        bool ht=false;
        int ball;
        for (int i = 0; i < 6; i++)
        {
            if ((scanf("%d",&num)==1))
            
            {
                wt_c=0;
                if (num==6)
                {
                    sx_c+=1;
                } else {
                    sx_c=0;
                }

                if (sx_c==3)
                {
                    ht=true;
                }
                
                
            } else if (scanf("%c",&c)==1)
            {
                wt_c+=1;
                if (wt_c==3)
                {
                    ht=true;
                }
                
            } 
            
        }

        if (ht)
        {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
  
    }
    
    return 0;
}