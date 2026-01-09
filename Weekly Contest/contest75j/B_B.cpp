#include<bits/stdc++.h>

int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        /* code */
        int ap=0, bp=0, am=7, bm=7;
        for (int i = 0; i < 6; i++)
        {
            /* code */
            int num;
            scanf("%d",&num);
            if (i<3)
            {
                /* code */
                ap+=num;
                if (num < am)
                {
                    /* code */
                    am=num;
                }
                
            } else if (i>=3)
            {
                /* code */
                bp+=num;
                if (bm > num)
                {
                    /* code */
                    bm=num;
                }
                
            }
            
            
        }
        ap-=am;
        bp-=bm;
        if (ap>bp)
        {
            /* code */
            printf("Alice\n");
        } else if (bp > ap)
        {
            /* code */
            printf("Bob\n");
        } else {
            printf("Tie\n");
        }
        
        
    }
    
    return 0;
}