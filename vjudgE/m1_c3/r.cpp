#include <bits/stdc++.h>

int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        int totalStudent = x*y;
        double pPass = (double) (z *100)/totalStudent;

        if (pPass > 50)
        {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        

    }
    
    return 0;
}