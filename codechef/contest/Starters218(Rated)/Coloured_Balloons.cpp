#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int n;
        scanf("%d",&n);
        int arr[n+1];
        int count=0;
        for (int i = 1; i <=n; i++)
        {
            /* code */
            int num;
            scanf("%d",&num);
            count = count + (num*i);
        }
        printf("%d\n",count);
    }
    
    return 0;
}