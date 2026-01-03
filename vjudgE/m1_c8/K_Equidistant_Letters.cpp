#include<bits/stdc++.h>

int main() {
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        /* code */
        char strArr[52];
        scanf("%s",&strArr);
        int ln = strlen(strArr);
        int arr[26]={0};
        for (int i = 0; i < ln; i++)
        {
            /* code */
            int pos=strArr[i]-'a';
            arr[pos]++;

        }

        for (int i = 0; i < 26; i++)
        {
            /* code */
            if (arr[i]==1)
            {
                /* code */
                printf("%c",i+'a');
            } else if (arr[i]==2)
            {
                /* code */
                printf("%c%c",i+'a',i+'a');
            }
            
            
        }
        printf("\n");
        
        
    }
    
    return 0;
}