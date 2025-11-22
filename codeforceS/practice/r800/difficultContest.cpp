#include <bits/stdc++.h>

int main() {
     long long t;
     scanf("%lld",&t);
     long long arrRn=200000;
     while (t--)
     {
        /* code */
        long long arr[arrRn];
        for (long long i = 0; i < arrRn; i++)
        {
            /* code */
            char c;
            scanf("%c",&c);
            arr[i]=toascii(c);
        }

        for (long long i = 0; i < arrRn; i++)
        {
            /* code */
            if (arr[i] !=10)
            {
                /* code */
                printf("%d ",arr[i]);
            } 
        }
        printf("\n");

        
        // for (long long i = 0; i < arrRn-2; i++)
        // {
        //     /* code */
        //     if (arr[i]!=10)
        //     {
        //         /* code */
        //         if ((arr[i]==70 && arr[i+1]==70 && arr[i+2]==84) ||
        //          (arr[i]==78 && arr[i+1]==84 && arr[i+2]==84)
        //         )
        //         {
        //             /* code */
        //             int temp=arr[i];
        //             arr[i]=arr[i+1];
        //             arr[i+1]=temp;
        //         }
                
        //     }
            
        // }

        // for (int i = 0; i < arrRn; i++)
        // {
        //     if (arr[i]!=10)
        //     {
        //         /* code */
        //         char x=(char)arr[i];
        //         printf("%c",x);
        //     }
            
        }
        // printf("\n");
   

    // }
     
    return 0;
}