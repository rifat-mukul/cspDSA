#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        for (int i = 0; i < 5; i++)
        {
            /* code */
            if (a<b && a < c)
            {
                /* code */
                a++;
            } else if (b<c)
            {
                /* code */
                b++;
            } else {
                c++;
            }
             
            
        }
        printf("%d\n",a*b*c);
    }
    
    return 0;
}