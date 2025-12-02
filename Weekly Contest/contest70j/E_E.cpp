#include<bits/stdc++.h>

int main() {
    int arr[100];
    long long ramge=999,count=0;

    while (true)
    {
        /* code */
        long long num;
        scanf("%lld",&num);
        arr[count]=num;
        ramge=num;
        count++;
        if (ramge==0)
        {
            /* code */
            break;
        }
        
    }

    for (int i = count-1; i >=0; i--)
    {
        /* code */
        printf("%lld\n",arr[i]);
    }
    
    
    
    
    return 0;
}