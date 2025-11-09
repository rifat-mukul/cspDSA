#include <bits/stdc++.h>

int main() {
    int x;
    scanf("%d",&x);
    while (x--)
    {
        int y;
        scanf("%d",&y);
        int arrIdx=1,sm=1,count=1;
        while (true)
        {
            /* code */
            if (sm==y)
            {
                // printf("%d\n",arrIdx);
                break;
            } else {
                int x = sm+2;
                if (x>y)
                {
                    /* code */
                    // printf("%d\n",arrIdx+1);
                    break;
                } else {
                    
                    if (x>y)
                {
                    /* code */
                    // printf("%d\n",arrIdx+1);
                    break;
                }
                    count+=2;
                    sm+=count;
                    arrIdx+=1;
                    printf("%d\n",count);
                    
                }
                
            }
            
            

        }
        printf("=====\n");
        
        
    }
    
    return 0;
}