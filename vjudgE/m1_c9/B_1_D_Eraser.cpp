#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        long long n,k;
        scanf("%lld%lld",&n,&k);
        char temp;
        char arr[n];
        scanf("%s",&arr);
        scanf("%c",&temp);
        // printf("%c",arr[0]);
        // printf("\n");
        long long count=0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (arr[i]=='B')
            {
                count++;
                i=i+k-1;
            }
            
        }

        printf("%d\n",count);
        
    }
    
    return 0;
}