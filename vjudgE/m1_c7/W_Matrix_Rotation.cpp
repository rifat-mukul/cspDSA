#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int arr[2][2];
        for (int i = 0; i < 2; i++)
        {
            /* code */
            for (int j = 0; j < 2; j++)
            {
                /* code */
                scanf("%d",&arr[i][j]);
            }
            
        }
        bool flag=false;
        for (int i = 0; i < 4; i++)
        {
            /* code */
            int count=0;
            if (arr[0][0] < arr[0][1])
            {
                /* code */
                count++;
            }

            if (arr[1][0] < arr[1][1])
            {
                /* code */
                count++;
            }

            if (arr[0][0] < arr[1][0])
            {
                /* code */
                count++;
            }

            if (arr[0][1] < arr[1][1])
            {
                /* code */
                count++;
            }

            if (count==4)
            {
                /* code */
                flag=true;
                break;
            } else {
                int temp1=arr[0][1];
                arr[0][1]=arr[0][0];
                int temp2=arr[1][1];
                arr[1][1]=temp1;
                int temp3=arr[1][0];
                arr[1][0]=temp2;
                arr[0][0]=temp3;
            }
            
            
        }
        if (flag)
        {
            /* code */
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        
        
        
    }
    
    return 0;
}