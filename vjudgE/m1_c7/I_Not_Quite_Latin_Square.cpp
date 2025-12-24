#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    char temp;
    while (t--)
    {
        /* code */
        char arr[3][3];
        for (int i = 0; i < 3; i++)
        {
            /* code */
            scanf("%s",arr[i]);
            scanf("%c",&temp);
        }
        int Varr[3]={0};

        // for (int i = 0; i < 3; i++)
        // {
        //     /* code */
        //     for (int j = 0; j < 3; j++)
        //     {
        //         printf("%c ",arr[i][j]);
                
        //     }
        //     printf("\n");
        // }
        // printf("=================\n");
        for (int i = 0; i < 3; i++)
        {
            /* code */
            for (int j = 0; j < 3; j++)
            {
                /* code */
                if (arr[i][j]=='A')
                {
                    /* code */
                    Varr[0]++;
                } else if (arr[i][j]=='B')
                {
                    /* code */
                    Varr[1]++;
                } else if (arr[i][j]=='C')
                {
                    /* code */
                    Varr[2]++;
                }
                
                
                
            }
            // printf("\n");
        }
        for (int i = 0; i < 3; i++)
        {
            /* code */
            if (Varr[i]!=3)
            {
                /* code */
                printf("%c\n",(char)i+65);
            }
            // printf("%d ",Varr[i]);
            
        }
        // printf("\n");
        
        
        
    }
    
    return 0;
}