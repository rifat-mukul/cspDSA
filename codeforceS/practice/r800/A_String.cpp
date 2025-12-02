#include<bits/stdc++.h>

int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        char st[50];
        scanf("%s",st);
        int count=0;
        int ln=strlen(st);
        for (int i = 0; i < ln; i++)
        {
            if (toascii(st[i])==49)
            {
                /* code */
                count++;
            }
            
        }
        printf("%d\n",count);
        
    }
    
    return 0;
}