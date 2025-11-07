#include <bits/stdc++.h>

int main(){
    int x;
    scanf("%d",&x);
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < x-i; j++)
        {
            /* code */
            printf(" ");
        }
        int star = (2*i) - 1;
        for (int k = 0; k < star; k++)
        {
            /* code */
            printf("*");
        }
        printf("\n");
        
        
    }
    
    
    return 0;
}