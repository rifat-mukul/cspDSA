#include<bits/stdc++.h>

int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        /* code */
        long long n;
        scanf("%lld",&n);
        int arr[n];
        for (long long i = 0; i < n; i++)
        {
            /* code */
            long long b;
            scanf("%lld",&b);
            arr[i]=b;
        }

        int arr2[2*n];
        arr2[0]=arr[0];
        int count=0;
        for (int i = 1; i <n;)
        {
            /* code */
            if (arr[i]>=arr2[count])
            {
                /* code */
                arr2[count+1]=arr[i];
                count++;
                i++;
            } else {
                long long num=arr[i]-1;
                if (num>0)
                {
                    arr2[count+1]=num;
                } else {
                    arr2[count+1]=arr[i];
                }

                count++;
            }
            
        }
        printf("%d\n",count+1);
        for (int i = 0; i < count+1; i++)
        {
            /* code */
            printf("%lld ",arr2[i]);
        }
        printf("\n");
        
        

    }
    
    return 0;
}