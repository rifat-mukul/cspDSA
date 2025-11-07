#include <bits/stdc++.h>

int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        /* code */
        int arr[4];
        int n1,n2,n3,n4,f1,f2,temp;
        scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
        if (n1>n2)
        {
            f1=n1;
        } else {
            f1=n2;
        }
        if (n3>n4)
        {
            /* code */
            f2=n3;
        } else {
            f2=n4;
        }
            
        if (n1 > n2) {
            temp = n1;
            n1 = n2;
            n2 = temp;
            }

        // Compare n1 and n3
        if (n1 > n3) {
            temp = n1;
            n1 = n3;
            n3 = temp;
        }

        // Compare n1 and n4
        if (n1 > n4) {
            temp = n1;
            n1 = n4;
            n4 = temp;
        }

        // Compare n2 and n3
        if (n2 > n3) {
            temp = n2;
            n2 = n3;
            n3 = temp;
        }

        // Compare n2 and n4
        if (n2 > n4) {
            temp = n2;
            n2 = n4;
            n4 = temp;
        }

        // Compare n3 and n4
        if (n3 > n4) {
            temp = n3;
            n3 = n4;
            n4 = temp;
        }

        // printf("%d %d",n3,n4);

        if ((f1 == n3 || f1==n4) && (f2==n3 || f2==n4))
        {
            /* code */
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        
        
        
        
    }
    
    
    return 0;
}