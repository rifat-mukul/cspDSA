#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    // char temp;
    char arr[] = {'c','o','d','e','f','o','r','c','e','s'};
    while (t--)
    {
        /* code */
        char c;
        if (scanf(" %c", &c) != 1) break;
        bool flag=false;
        for (int i = 0; i < 10; i++)
        {
            if (arr[i]==c)
            {
                flag=true;
                break;
            }
            
        }
        if (flag)
        {
            /* code */
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        
        
        
    }
    
    return 0;
}