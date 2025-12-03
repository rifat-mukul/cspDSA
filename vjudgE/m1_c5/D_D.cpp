#include<bits/stdc++.h>

int main() {
    int n,d;
    scanf("%d%d",&n,&d);
    char arr[n][d];
    char temp;
    scanf("%c",&temp);
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < d; j++)
        {
            /* code */
            scanf("%c",&arr[i][j]);
        }
        scanf("%c",&temp);
    }
    
    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     for (int j = 0; j < d; j++)
    //     {
    //         /* code */
    //         printf("%c",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    
    int ar[d]={0};

    for (int i = 0; i < d; i++)
    {
        int cnt=0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j][i]=='o')
            {
                cnt++;
            }
        }
        if (cnt==n)
        {
            ar[i]=1;
        }
        
        
    }
    // for (int i = 0; i < d; i++)
    // {
    //     /* code */
    //     printf("%d\n",ar[i]);
    // }

    int result=0;
    for (int i = 0; i < d; i++)
    {
        /* code */
        if (ar[i]==1)
        {
            int ln=1;
            for (int k = i+1; k < d; k++)
            {
                if (ar[k]==1)
                {
                    /* code */
                    ln++;
                } else {
                    break;
                }
                
            }
            if (ln>result)
            {
                result=ln;
            }
            
            
        }
        
    }
    printf("%d\n",result);
    
    

    return 0;
}