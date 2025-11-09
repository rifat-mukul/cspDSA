#include <bits/stdc++.h>

int main() {
    long long n;
    scanf("%lld",&n);
    char s[n+1];
    scanf("%s", s);          
    long long len = strlen(s);
    long long q;
    scanf("%lld",&q);
    while (q--)
    {
        char c1,c2;
        scanf(" %c %c",&c1,&c2);
        if (c1==c2)
        {
            continue;
        } else {
            // int pos1=0,pos2=0;
            for (int i = 0; i < n; i++)
            {
                if (s[i]==c1)
                {
                    s[i]=c2;
                }
                
            }

        }   
    }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%c",s[i]);
    // }
    // printf("\n");
    printf("%s\n",s);
    
    
    return 0;
}
