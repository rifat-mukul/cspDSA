#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int n;
        scanf("%d",&n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            scanf("%d",&arr[i]);
        }
        // printf("\n");
        
        int arr2[n];
        int count=0;
        for (int i = 1; count<n; i++)
        {
            /* code */
            if (arr[count]!=i)
            {
                /* code */
                arr2[count]=i;
                count++;
            }
            
        }
        // for (int i = 0; i < n; i++)
        // {
        //     /* code */
        //     printf("%d ",arr2[i]);
        // }
        // printf("\n");
        printf("%d\n",arr2[n-1]);
    }
    

    return 0;
}