#include<bits/stdc++.h>


int main() {
     int t;
     scanf("%d",&t);
     while (t--)
     {
        int n;
        scanf("%d",&n);
        if (n >=1 && n<=10)
        {
            /* code */
            printf("Lower Double\n");
        } else if (n >=11 && n <=15)
        {
            printf("Lower Single\n");
        } else if (n >=16 && n<=25)
        {
            printf("Upper Double\n");
        } else if (n >=26 && n<=30)
        {
            printf("Upper Single\n");
        }
        
        
        
        
     }
     
    return 0;
}
