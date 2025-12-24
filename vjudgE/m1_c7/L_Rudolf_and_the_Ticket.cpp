#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int n,m,k;
        scanf("%d%d%d",&n,&m,&k);
        int arrn[n+1], arrm[m+1];
        for (int i = 0; i < n; i++)
        {
            /* code */
            scanf("%d",&arrn[i]);
        }

        for (int i = 0; i < m; i++)
        {
            /* code */
            scanf("%d",&arrm[i]);
        }
        int count=0;

        for (int i = 0; i < n; i++)
        {
            /* code */
            for (int j = 0; j < m; j++)
            {
                /* code */
                if (arrn[i] + arrm[j] <= k)
                {
                    count++;
                }
                
            }
            
        }
        printf("%d\n",count);
        
    }
    
    return 0;
}