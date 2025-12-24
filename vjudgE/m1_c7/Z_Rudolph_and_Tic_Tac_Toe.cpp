#include<bits/stdc++.h>

int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        /* code */
        char arr[3][3];
        for (int i = 0; i < 3; i++)
        {
            /* code */
            scanf("%s",arr[i]);
        }

        bool flag=false;
        if (!flag && arr[0][0]==arr[0][1] && arr[0][1]==arr[0][2] && arr[0][0]!='.')
        {
            printf("%c\n",arr[0][0]);
            flag=true;
            
        } else if (!flag && arr[1][0]==arr[1][1] && arr[1][1]==arr[1][2] && arr[1][0]!='.')
        {
            printf("%c\n",arr[1][0]);
            flag=true;
        } else if (!flag && arr[2][0]==arr[2][1] && arr[2][1]==arr[2][2] && arr[2][0]!='.')
        {
            printf("%c\n",arr[2][0]);
            flag=true;
        } else if (!flag && arr[0][0]==arr[1][0] && arr[1][0]==arr[2][0] && arr[0][0]!='.')
        {
            printf("%c\n",arr[0][0]);
            flag=true;
        } else if (!flag && arr[0][1]==arr[1][1] && arr[1][1]==arr[2][1] && arr[0][1]!='.')
        {
            printf("%c\n",arr[0][1]);
            flag=true;
        } else if (!flag && arr[0][2]==arr[1][2] && arr[1][2]==arr[2][2] && arr[0][2]!='.')
        {
            printf("%c\n",arr[0][2]);
            flag=true;
        } else if (!flag && arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2] && arr[0][0]!='.')
        {
            printf("%c\n",arr[0][0]);
            flag=true;
        } else if (!flag && arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0] && arr[0][2]!='.')
        {
            printf("%c\n",arr[0][2]);
            flag=true;
        } else if (!flag)
        {
            /* code */
            printf("DRAW\n");
        }
        
        
        
        
    }

    
    
    return 0;
}