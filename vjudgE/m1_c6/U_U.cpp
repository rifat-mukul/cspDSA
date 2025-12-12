#include<bits/stdc++.h>

int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        /* code */
        int arr[999999];
        long long pos=0;
        long long num;
        scanf("%lld",&num);
        int count=10;
        while (num > 0)
        {
            /* code */
            int temp=num%count;
            if (temp > 0)
            {
                /* code */
                arr[pos]=temp;
                pos++;
                num-=temp;
            }
            count*=10;
            
        }

        printf("%lld\n",pos);
        for (int i = 0; i <pos; i++)
        {
            /* code */
            printf("%lld ",arr[i]);
        }
        printf("\n");
        
        
    }
    
    return 0;
}