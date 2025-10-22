#include <bits/stdc++.h>

int main() {
    long long a;
    scanf("%lld", &a);
    if (a <= (pow(10,3) - 1))
    {
        printf("%lld\n",a);
    } else if (a >=(pow(10,3)) and a <= (pow(10,4)- 1))
    {
        long long k = a % 10;
        printf("%lld\n",a - k);
    } else if (a >=(pow(10,4)) and a <= (pow(10,5)- 1))
    {
        /* code */
        long long k = a % 100;
        printf("%lld\n",a - k);
    } else if (a >=(pow(10,5)) and a <= (pow(10,6)- 1))
    {
        /* code */
        long long k = a % 1000;
        printf("%lld\n",a - k);
    } else if (a >=(pow(10,6)) and a <= (pow(10,7)- 1))
    {
        /* code */
        long long k = a % 10000;
        printf("%lld\n",a - k);
    } else if (a >=(pow(10,7)) and a <= (pow(10,8)- 1))
    {
        /* code */
        long long k = a % 100000;
        printf("%lld\n",a - k);
    } else if (a >=(pow(10,8)) and a <= (pow(10,9)- 1))
    {
        /* code */
        long long k = a % 1000000;
        printf("%lld\n",a - k);
    }
  
    return 0;
}