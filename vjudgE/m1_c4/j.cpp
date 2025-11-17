#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    scanf("%lld", &n);
    
    long long strArr[(n * 4)-1];
    
    for (long long i = 0; i < (n * 4) - 1; i++) {
        scanf("%lld", &strArr[i]);
    }

    sort(strArr, strArr + (n * 4) - 1);

    for (long long i = 0; i < (n * 4)-1; i+=4)
    {
        if (i+4 >(n * 4)-1)
        {
            printf("%d\n",strArr[i]);
        }
        
        else if 
         (strArr[i]!=strArr[i+1] ||
            strArr[i+2]!=strArr[i+1] ||
            strArr[i+2]!=strArr[i+3]
        )
        {
            printf("%d\n",strArr[i]);
            break;
        }
    }
    
    
    


    return 0;
}
