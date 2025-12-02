#include<bits/stdc++.h>

int main() {
    int h,w,x,y;
    scanf("%d%d%d%d",&h,&w,&x,&y);
    char arr[h][w];
    char temp;
    scanf("%c",&temp);
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j <  w; j++)
        {
            /* code */
            scanf("%c",&arr[i][j]);
        }
        scanf("%c",&temp);
        
    }
    
    // for (int i = 0; i < h; i++)
    // {
    //     /* code */
    //     for (int j = 0; j < w; j++)
    //     {
    //         /* code */
    //         printf("%c",arr[i][j]);
    //     }
    //     printf("\n");
    // }

    int ans=1;
    for (int i = y; i < w; i++)
    {
        /* code */
        if (arr[x-1][i]=='.')
        {
            /* code */
            ans++;
        } else {
            break;
        }
        
    }

    for (int i = y-2; i >=0; i--)
    {
        /* code */
        if (arr[x-1][i]=='.')
        {
            /* code */
            ans++;
        } else {
            break;
        }
        
    }

    for (int i = x; i < h; i++)
    {
        /* code */
        if (arr[i][y-1]=='.')
        {
            /* code */
            ans++;
        } else {
            break;
        }
        
    }
    
    for (int i = x-2; i >=0; i--)
    {
        /* code */
        if (arr[i][y-1]=='.')
        {
            /* code */
            ans++;
        } else {
            break;
        }
    }
    
    printf("%d\n",ans);
    
    
    
    return 0;
}