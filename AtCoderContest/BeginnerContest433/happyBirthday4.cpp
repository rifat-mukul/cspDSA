#include <bits/stdc++.h>

int main() {
     int x,y,z;
     scanf("%d%d%d",&x,&y,&z);
     if (y*z<=x)
     {
        /* code */
        while (true)
        {
            /* code */
            if (y*z<=x)
            {
                /* code */
                if (x >100 || y>100)
                {
                    /* code */
                    break;
                }
                else if (y*z==x)
                {
                    /* code */
                    printf("Yes\n");
                    break;
                }
                 
                
                else {
                    y++;
                    x++;
                }
                
            }
            
        }
        
     } else {
        printf("No\n");
     }
     
    return 0;
}