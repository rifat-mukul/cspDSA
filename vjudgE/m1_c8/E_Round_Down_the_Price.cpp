#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        /* code */
        long long m;
        scanf("%lld",&m);
        int k=1;
        int temp=m;
        temp/=10;
        while (temp>0)
        {
            temp/=10;
            k*=10;
            // printf("%d\n",temp);
        }
        printf("%d\n",m-k);
        // printf("===========\n");
        
    }
    
    return 0;
}