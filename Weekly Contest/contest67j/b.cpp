#include<bits/stdc++.h>


int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int p,q,r,s;
        scanf("%d%d%d%d",&p,&q,&r,&s);
        int pm = q+r+s;
        int qm = p+r+s;
        int rm = p+q+s;
        int sm = p+r+q;
        if (p>pm||q>qm||r>rm||s>sm)
        {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        
    }
    
    return 0;
}
