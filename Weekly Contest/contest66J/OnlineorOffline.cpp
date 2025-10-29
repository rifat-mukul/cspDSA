#include<bits/stdc++.h>


int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        float n,m;
        scanf("%f%f",&n,&m);
        n = n - (n*0.1);
        // printf("%d %d", n ,m);
        if (n < m)
        {
            printf("ONLINE\n");
        } else if (n > m)
        {
            printf("DINING\n");
        } else {
            printf("EITHER\n");
        }   
        
    }
    
    return 0;
}
