#include <bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    int count = 0,i=1;
    int arr[1000];
    while (count <=1000)
    {
        if (i%3!=0 && i%10!=3)
        {
            arr[count] = i;
            count++;
        }
        i++;
        
    }
    
    while (t--)
    {
        /* code */
        int k;
        scanf("%d",&k);
        printf("%d\n",arr[k-1]);

    }
    
    return 0;
}