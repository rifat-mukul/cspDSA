#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int x,y,n;
        scanf("%d%d%d",&x,&y,&n);
        int count=1;
        int arr[n] ={0};
        arr[0]=x;
        arr[n-1]=y;

        for (int i = n-2; i >0; i--)
        {
            /* code */
            int num=arr[i+1]-count;
            if (i==1)
            {
                /* code */
                if (num-arr[i-1] > arr[i+1]-num)
                {
                    /* code */
                    arr[i]=num;
                }
                
            } else {
                arr[i]=num;
                count++;
            }
            
        }
        int zC=0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i]==0)
            {
                /* code */
                zC++;
            }
            
        }
        if (zC>0)
        {
            /* code */
            printf("-1\n");
        } else {
            for (int i = 0; i < n; i++)
            {
                /* code */
                printf("%d ",arr[i]);
            }
            printf("\n");
        }
        
        
        
    }
    
    return 0;
}