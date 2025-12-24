#include<bits/stdc++.h>
using namespace std;


int main() {
    int n,x;
    scanf("%d%d",&n,&x);
    int arr[n];
    for (int i = 0; i < n-1; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (arr[n-1] = 0; arr[n-1] <=100; arr[n-1]++)
    {
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            sum+=arr[i];
        }

        int minNum=101,maxnum=0;

        for (int i = 0; i < n; i++)
        {
            /* code */
            minNum=min(arr[i],minNum);
            maxnum=max(arr[i],maxnum);
        }

        sum=sum-minNum-maxnum;

        if (sum>=x)
        {
            /* code */
            break;
        }
        
        
        
    }
    if (arr[n-1]>100)
    {
        printf("-1\n");
    }
    else {
        printf("%d\n",arr[n-1]);
    }
    
    return 0;
}