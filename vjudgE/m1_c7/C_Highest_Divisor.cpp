#include<bits/stdc++.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int i = 10; i >0; i--)
    {
        if (n%i==0)
        {
            printf("%d\n",i);
            break;
        }
        
    }
    
    return  0;
}