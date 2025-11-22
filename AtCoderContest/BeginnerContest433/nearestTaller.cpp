#include <bits/stdc++.h>

int main() {
     int n;
     scanf("%d",&n);
    //  printf("%d",n);
     int arr[n];
     int count=0;
     for (int i = 0; i < n; i++)
     {
        /* code */
        scanf("%d",&arr[i]);
     }
     
    //  for (int i = 0; i < n; i++)
    //  {
    //     /* code */
    //     printf("%d ",arr[i]);
    //  }
     
     printf("-1\n");
     for (int i = 1; i < n; i++)
     {
        /* code */
        bool flag=true;
        for (int j = i-1; j >=0; j--)
        {
            /* code */
            if (arr[j] > arr[i])
            {
                /* code */
                printf("%d\n",j+1);
                flag=false;
                break;
            }
            
        }
        if (flag)
        {
            /* code */
            printf("-1\n");
        }
        
        

     }
     
     
    return 0;
}