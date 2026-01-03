#include<bits/stdc++.h>

int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        /* code */
        int n;
        scanf("%d",&n);
        char arr[n+1];
        scanf("%s",&arr);
        
        int tsx=0,ttf=0;
        for (int i = 0; i < n-3; i++)
        {
            /* code */
            if (arr[i]=='2' && arr[i+1]=='0' && arr[i+2]=='2' && arr[i+3]=='6')
            {
                tsx++;

            } else if (arr[i]=='2' && arr[i+1]=='0' && arr[i+2]=='2' && arr[i+3]=='5')
            {
                ttf++;
            }
            
            
        }
        if (tsx>0 || ttf==0)
        {
            printf("0\n");
        } else {
            printf("1\n");
        }
        

        
    }
    
    return 0;
}