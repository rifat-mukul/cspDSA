#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        long long n;
        scanf("%lld",&n);
        char arr[n];
        scanf("%s",&arr);
        int b[n];
        for (int i = 0; i < n; i++)
        {
            b[i]=arr[i]-'0';
        }
        // for (int i = 0; i < n; i++)
        // {
        //     /* code */
        //     printf("%d ",b[i]);
        // }
        
        // printf("\n");

        int a[n],d[n];
        a[0]=1;
        d[0]=a[0]+b[0];
        for (int i = 1; i < n; i++)
        {
            /* code */
            if (b[i]+1!=d[i-1])
            {
                /* code */
                a[i]=1;
                d[i]=a[i]+b[i];
            } else if (b[i]+0!=d[i-1])
            {
                /* code */
                a[i]=0;
                d[i]=a[i]+b[i];
            }
            
            
        }

        for (int i = 0; i < n; i++)
        {
            /* code */
            printf("%d",a[i]);
        }
        printf("\n");
        

    }
    

    
    return 0;
}