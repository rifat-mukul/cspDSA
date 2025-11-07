#include <bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int a1,a2,a3,b1,b2,b3;
        int arr[6];
        for (int i = 0; i < 6; i++)
        {
            /* code */
            int num;
            scanf("%d",&num);
            arr[i] = num;

        }
        a1=arr[0];
        a2=arr[1];
        a3=arr[2];
        b1=arr[3];
        b2=arr[4];
        b3=arr[5];

        int as,am,ae,bs,bm,be;
        if (a1>=a2 && a1>=a3)
        {
            if (a2>=a3)
            {
                as=a1;
                am=a2;
                ae=a3;
            } else {
                as=a1;
                am=a3;
                ae=a2;
            }
            
        } else if (a2>=a1 && a2>=a3)
        {
            /* code */
            if (a1>=a3)
            {
                as=a2;
                am=a1;
                ae=a3;
            } else {
                as=a2;
                am=a3;
                ae=a1;
            }
            
        } else {
            if (a1>=a2)
            {
                as=a3;
                am=a1;
                ae=a2;
            } else {
                as=a3;
                am=a2;
                ae=a1;
            }
            
        }


        if (b1>=b2 && b1>=b3)
        {
            if (b2>=b3)
            {
                bs=b1;
                bm=b2;
                be=b3;
            } else {
                bs=b1;
                bm=b3;
                be=b2;
            }
            
        } else if (b2>=b1 && b2>=b3)
        {
            /* code */
            if (b1>=b3)
            {
                bs=b2;
                bm=b1;
                be=b3;
            } else {
                bs=b2;
                bm=b3;
                be=b1;
            }
            
        } else {
            if (b1>=b2)
            {
                bs=b3;
                bm=b1;
                be=b2;
            } else {
                bs=b3;
                bm=b2;
                be=b1;
            }
            
        }
        
        int alice = (as*100) + (am*10) + ae;
        int bob = (bs*100) + (bm*10) + be;

        if (alice == bob)
        {
            printf("Tie\n");
        } else if (bob>alice)
        {
            printf("Bob\n");
        } else if (bob < alice)
        {
            printf("Alice\n");
        }
        
        

        // if (bob>alice)
        // {
        //     printf("Bob\n");
        // } else if (bob < alice)
        // {
        //     printf("Alice\n");
        // } else {
        //     printf("Tie\n");
        // }
        
        
        
    }
    
    return 0;
}