#include <bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int n;
        scanf("%d",&n);
        int strArr[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            int d,t;
            scanf("%d%d",&d,&t);
            strArr[i] = d/t;
        }

        int mxIdx=0,mxVal=0;

        for (int i = 0; i < n; i++)
        {
            /* code */
            if (strArr[i]>mxVal)
            {
                /* code */
                mxVal=strArr[i];
                mxIdx=i;
            }
            
        }
        printf("%d\n",mxIdx+1);
        
        
    }
    
    return 0;
}