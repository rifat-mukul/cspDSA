#include<bits/stdc++.h>


int main() {
    int t,count;
    scanf("%d",&t);
    int a[t];
    count = 0;
    while (t--)
    {
        int x,y;
        scanf("%d%d",&y,&x);
        if (y==1)
        {
            a[count] = x;
            count+=1;
        } else if (y == 2)
        {
            printf("%d\n",a[count-x]);
        }
  
    }
    
    return 0;
}
