#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n); 
        char s[1000];     
        scanf("%s", s); 
        // printf("%d\n", n); 
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            arr[i] = toascii(s[i]);
        }

        // for (int i = 0; i < n; i++)
        // {
        //     /* code */
        //     printf("%d ",arr[i]);
        // }
        // printf("\n");
        int a=1;
        int b=0;
        int ca=0;
        int cb=0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i]==65 && a==1 && b==0)
            {
                ca++;
            } else if (arr[i]==66 && a==1 && b==0)
            {
                /* code */
                b=1;
                a=0;
            } else if (arr[i]==66 && a==0 && b==1)
            {
                /* code */
                cb++;
            } else if (arr[i]==65 && a==0 && b==1)
            {
                /* code */
                a=1;
                b=0;
            } 
            
        }

        printf("%d %d\n",ca,cb);
        

        
    }
    return 0;
}