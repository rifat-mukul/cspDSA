#include <bits/stdc++.h>

int main() {
     int x,y,z;
     scanf("%d%d%d",&x,&y,&z);
     if ((x>=1 && x<=100) &&
      (y>=1 && y<=100) &&
       (z>=2 && z<=10))
     {
        if (y*z<=x)
        {
            // /* code */
            // while (true)
            // {
            //     /* code */
            //     if (y*z<=x)
            //     {
            //         if (y*z==x)
            //         {
            //             /* code */
            //             printf("Yes\n");
            //             break;
            //         }
                    
                    
            //         else {
            //             y++;
            //             x++;
            //         }
                    
            //     }
                
            // }
            printf("Yes\n");
            
        } else {
            printf("No\n");
        }
     }
     

     
    return 0;
}