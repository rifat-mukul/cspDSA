#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int n;
        scanf("%d",&n);
        int arr[n],count=0,assNum=2;
        if (n==1)
        {
            /* code */
            printf("%d\n",1);
        } else {
            int count=0;
            for (int i = 2; count < n;)
            {     
                printf("%d ",i);
                if (i==2)
                {
                    i++;
                } else {
                    i+=2;
                }
                count++;
            }
            printf("\n");
            
        }

        // for (int i = 0; i < n; i++)
        // {
        //     /* code */
        //     printf("%d ",arr[0]);
        // }
        // printf("\n");
        
        
    }
    
    return 0;
}