#include <bits/stdc++.h>

int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        int a, b, num=0,ast=0,aed=0,bst=0,bed=0,amd=0,bmd=0;
        // int num,ast,aed,bst,bed;
        for (int i = 0; i < 6; i++)
        {   
            scanf("%d",&num);

            if (i<3)
            {
                if (i==0)
                {
                    ast+= (num);
                    amd+=(num*10);
                    aed+= (num*100);
                } else if (i==1)
                {
                    ast+= (num);
                    amd+=(num*10);
                    aed+= (num*100);
                } else {
                    ast+= (num);
                    amd+=(num*10);
                    aed+= (num*100);
                }
                
                
            } else {
                if (i==3)
                {
                    bst+= (num);
                    bmd+=(num*10);
                    bed+= (num*100);
                } else if (i==4)
                {
                    bst+= (num);
                    bmd+=(num*10);
                    bed+= (num*100);
                } else {
                    bst+= (num);
                    bmd+=(num*10);
                    bed+= (num*100);
                }
            }
            
        }
        // printf("%d %d %d %d\n",ast,aed,bst,bed);
        if (ast>aed and ast>amd)
        {
            a=ast;
        } else if (amd>ast and amd>aed)
        {
            a=amd;
        } else
         {
            a=aed;
        }

        if (bst>bed and bst>bmd)
        {
            b = bst;
        } else if (bmd>bst and bmd>bed)
        {
            /* code */
            b = bmd;
        } else
         {
            b=bed;
        }
        
        
        printf("%d %d\n",a,b);
        // if (a>b)
        // {
        //     printf("Alice\n");
        // } else if (b>a)
        // {
        //     /* code */
        //     printf("Bob\n");
        // } else
        //  {
        //     printf("Tie\n");
        // }
    }
    
    return 0;
}