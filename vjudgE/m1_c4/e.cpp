#include <bits/stdc++.h>

int main() {
    int strArry[8];
    for (int i = 0; i < 8; i++)
    {
        
        scanf("%d",&strArry[i]);
    }

    bool flag=true;
    for (int i = 0; i < 8; i++)
    {
        if (i==0)
        {
            if (strArry[i]<100 || strArry[i]>675 || strArry[i]%25!=0)
            {
                /* code */
                flag=false;
                break;
            }
            
        } else {
            if (strArry[i-1] > strArry[i] || 
                strArry[i]<100 || 
                strArry[i]>675 ||
                strArry[i]%25!=0
            )
            {
                flag=false;
                break;
            }
            
        }
        // printf("%d\n",i);
        
    }
    if (flag)
    {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    
    
    return 0;
}