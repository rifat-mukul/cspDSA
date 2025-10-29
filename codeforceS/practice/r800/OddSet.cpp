#include<bits/stdc++.h>

int main() {
    int t,n,a;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        // int arr[2 * n];
        int evenCount = 0;
        int oddCount = 0;
        for (int i = 0; i < (2*n); i++)
        {
            scanf("%d",&a);
            if (a%2==0)
            {
                evenCount+=1;
            } else {
                oddCount+=1;
            }
            
        }
        if (evenCount == oddCount)
        {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
        
    }
    
    return 0;
}