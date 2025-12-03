#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int n,c;
        scanf("%d%d",&n,&c);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            scanf("%d",&arr[i]);
        }
        char carr[n];
        scanf("%s",carr);
        int point=0;
        int count=0;
        
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (carr[i]=='0')
            {
                point+=arr[i];
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (carr[i]=='1' && count==0)
            {
                /* code */
                if (point >= c)
                {
                    /* code */
                    int nx=point+arr[i] -c;
                    if (nx>point)
                    {
                        /* code */
                        point=nx;
                        count=1;
                    }
                    
                }
                
            } else if (carr[i]=='1' && count==1) {
                point+=arr[i];
                
            }
            
        }
        
        
        printf("%d\n",point); 
        
    }
    
    return 0;
}