#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char arr[10];
        scanf("%s",arr);

        // int count=0;
        // for (int i = 0; i < 10; i++)
        // {
        //     /* code */
        //     if (arr[i]> 10)
        //     {
        //         count++;
        //     }
        // }
        int c1=strlen(arr);
        // printf("%d",c1);

        // arr[count-1]=' ';
        arr[c1-2]='i';
        for (int i = 0; i < c1-1; i++)
        {
            /* code */
            printf("%c",arr[i]);
        }
        
        printf("\n");
        
    }
    
    return 0;
}
