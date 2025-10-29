#include <bits/stdc++.h>

int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        long long num;
        scanf("%lld",&num);
        int num1 = num/3;
        if ((num1 + (num1*2)) == num)
        {
            printf("%d %d\n",num1, num1);
        } else {
            int num2 = num1+1;
            int test1 = num1 + (2 * num2);
            int test2 = num2 + (2 * num1);
            if (test1 == num)
            {
                printf("%d %d\n", num1,num2);
            } else {
                printf("%d %d\n", num2, num1);
            }
            
        }  
        
    }
    
    return 0;
}

// else if (num1 == 0)
//         {
//             printf("%lld %d\n",num, 0);
//         }