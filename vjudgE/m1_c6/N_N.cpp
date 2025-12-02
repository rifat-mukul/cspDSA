#include<bits/stdc++.h>

int main() {
    int n;
    scanf("%d",&n);
    char arr[n];
    scanf("%s",arr);
    int base = n/2, t=0,a=0;
    if (n%2!=0)
    {
        /* code */
        base = base+1;
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (arr[i]=='A')
            {
                /* code */
                a++;
                if (a==base)
                {
                    /* code */
                    printf("A\n");
                    break;
                }
                
            } else {
                t++;
                if (t==base)
                {
                    /* code */
                    printf("T\n");
                    break;
                }
            }
            
        }
        
    } else {
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (arr[i]=='A')
            {
                /* code */
                a++;
                if (a==base)
                {
                    /* code */
                    printf("A\n");
                    break;
                }
                
            } else {
                t++;
                if (t==base)
                {
                    /* code */
                    printf("T\n");
                    break;
                }
            }
        
        }
    }
    
    return 0;
}