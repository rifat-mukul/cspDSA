#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int n;
        scanf("%d",&n);
        bool flag=true;
        int z=1,count=0;
        while (flag)
        {
            int num=2*z-1;
            if (z%2!=0)
            {
                /* code */
                z++;
                count-=num;
                if (count<-n || count>n)
                {
                    /* code */
                    printf("Sakurako\n");
                    flag=false;
                    break;
                }
                

            } else {
                z++;
                count+=num;
                if (count<-n || count>n)
                {
                    /* code */
                    printf("Kosuke\n");
                    flag=false;
                    break;
                }
            }
            
        }
        
    }
    
    return 0;
}