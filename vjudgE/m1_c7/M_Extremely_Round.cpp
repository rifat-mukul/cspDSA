#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        /* code */
        long long n;
        scanf("%lld",&n);
        int count=0;
        for (int i = 1; i < 10; i++)
        {
            /* code */
            int num=i;
            while (num <=n)
            {
                /* code */
                count++;
                num=num*10;
            }
            
        }
        printf("%d\n",count);
        
    }
    
    return 0;
}