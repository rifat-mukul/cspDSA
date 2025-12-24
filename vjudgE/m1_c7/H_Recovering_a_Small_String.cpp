#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int n;
        scanf("%d",&n);
        bool gotAns=false;
        for (char i = 'a'; i <='z'; i++)
        {
            /* code */
            for (char j = 'a'; j <='z'; j++)
            {
                /* code */
                for (char k = 'a'; k <='z'; k++)
                {
                    /* code */
                    int fv=i-'a'+1;
                    int sc=j-'a'+1;
                    int tc=k-'a'+1;
                    if (fv+sc+tc==n)
                    {
                        /* code */
                        printf("%c%c%c\n",i,j,k);
                        gotAns=true;
                        break;
                    }
                    
                }
                if (gotAns)
                {
                    /* code */
                    break;
                }
                
                
            }
            if (gotAns)
            {
                /* code */
                break;
            }
            
            
        }

        
        
    }
    
    return 0;
}