#include <bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int n,k;
        scanf("%d%d",&n,&k);
        int arr[100]={0};
        int realArr[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            int num;
            scanf("%d",&num);
            arr[num]++;
            realArr[i]=num;

        }
        

        int countX=0;
        for (int i = 0; i < n; i++)
        {
            if (realArr[i]==k)
            {
                countX++;
            }
            
        }

        if (countX==0)
        {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
        
        
        // int cnt1 = arr[k];
        //  if (cnt1>0){

        //     int cnt2=0;
        //     for (int i = 0; i < n; i++)
        //     {
        //         /* code */
        //         if (realArr[i]!=k)
        //         {
        //             /* code */
        //             if (arr[realArr[i]] > cnt2)
        //             {
        //                 /* code */
        //                 cnt2=arr[realArr[i]];
        //             }
                    
        //         }
                
        //     }
        //     if ((cnt1==cnt2) || (n==1 && realArr[0]==k))
        //     {
        //         printf("YES\n");
        //     } 
        //     else {
        //         printf("NO\n");
        //     }
        // }  
        //  else {
        //     printf("NO\n");
        // }
        
        
    }
    
    return 0;
}