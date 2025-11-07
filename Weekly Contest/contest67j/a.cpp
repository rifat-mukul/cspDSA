#include<bits/stdc++.h>


int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n, x;
        scanf("%d%d",&n,&x);
        int half;
        if (n%2==0)
        {
            half = n/2;
        } else {
            half = (n/2) + 1;
        }
        // printf("%d\n",half);
        if (x>= half)
        {
            printf("YES\n");
        } else{
            printf("NO\n");
        }
        
        
    }
    
    return 0;
}
