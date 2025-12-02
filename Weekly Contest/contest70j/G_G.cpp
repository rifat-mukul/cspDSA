#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        char arr[100];
        scanf("%s",arr);
        int ln=strlen(arr);
        // printf("%d",ln);
        // for (int i = 0; i < ln; i++)
        // {
        //     printf("%c",arr[i]);
        // }
        // printf("\n");
        
        if (ln<=2)
        {
            for (int i = 0; i < ln; i++)
            {
                /* code */
                printf("%c",arr[i]);
            }
            printf("\n");
            
        } else {
            for (int i = 0; i < ln-2; i+=2)
            {
                /* code */
                printf("%c",arr[i]);
            }
            printf("%c%c\n",arr[ln-2],arr[ln-1]);
            // printf("\n");
            
        }
        
    }
    
    return 0;
}