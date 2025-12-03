#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int r,g,b;
        scanf("%d%d%d",&r,&g,&b);
        int price=0;
        while (r>0 && g>0 && b>0)
        {
            /* code */
            r--;
            g--;
            b--;
            price+=10;
        }
        
        price = price + ((r*3)+(g*3)+(b*3));
        printf("%d\n",price);
    }
    
    return 0;
}