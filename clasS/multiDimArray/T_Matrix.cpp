#include<bits/stdc++.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            scanf("%d",&arr[i][j]);
        }
        
    }
    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     for (int j = 0; j < n; j++)
    //     {
    //         /* code */
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
        
    // }
    int md=0, sd=0;

    for (int i = 0; i < n; i++)
    {
        /* code */
        md+=arr[i][i];
        sd+=arr[i][(n-1)-i];

    }
    
    printf("%d\n",abs(md-sd));
    return 0;
}