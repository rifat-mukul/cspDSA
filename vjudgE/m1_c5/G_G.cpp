#include<bits/stdc++.h>

int main() {
    for (int i = 0; i < 8; i++)
    {
        char abs_s[8];
        scanf("%s", abs_s);
        bool flag=false;
        for (int j = 0; j < 8; j++)
        {
            /* code */
            if (abs_s[j]=='*')
            {
                /* code */
                printf("%c%d\n",toascii(97+j),(8-i));
                flag=true;
                break;
            }
            
        }
        
        if (flag)
        {
            /* code */
            break;
        }
        
    }
    
    return 0;
}