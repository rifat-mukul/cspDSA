#include<bits/stdc++.h>

int main() {
    int h,w;
    scanf("%d%d",&h,&w);
    // char arr[w];
    int count=0;
    for (int i = 0; i < h; i++)
    {
        /* code */
        char arr[w];
        scanf("%s",&arr);
        for (int j = 0; j < w; j++)
        {
            /* code */
            // printf("%c ",arr[j]);
            if (arr[j]=='#')
            {
                /* code */
                count++;
            }
            
        }
        // printf("\n");
    }
    printf("%d\n",count);
    
    return 0;
}