#include<bits/stdc++.h>

int main() {
    long long number;
    scanf("%lld",&number);
    bool flag=true;
    for (int i = 0; i <=60; i++)
    {
        /* code */
        for (int j = 0; j <=38; j++)
        {
            /* code */
            long long x=pow(2,i) * pow(3,j);
            if (number==x)
            {
                /* code */
                printf("Yes\n");
                flag=false;
                break;
            }
            
        }
        
    }
    if (flag)
    {
        printf("No\n");
    }
    
    
    return 0;
}