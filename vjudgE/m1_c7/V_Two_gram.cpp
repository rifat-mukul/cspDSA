#include<bits/stdc++.h>

int main() {
    int t;
    scanf("%d",&t);
    char arr[t+1],temp;
    scanf("%s",arr);
    // scanf("%c",&temp);
    int maxCoun0=0;
    char rst[3];
    rst[2]='\0';

    for (char c1 = 'A'; c1<='Z'; c1++)
    {
        /* code */
        for (char c2 = 'A'; c2<='Z'; c2++)
        {
            /* code */
            int count=0;
            for (int i = 0; i < t-1; i++)
            {
                /* code */
                if (arr[i]==c1 && arr[i+1]==c2)
                {
                    /* code */
                    count++;
                }
                
            }
            // printf("%d\n",count);
            if (count>maxCoun0)
            {
                /* code */
                rst[0]=c1;
                rst[1]=c2;
                maxCoun0=count;
            }
            
            
        }
        
    }
    printf("%s\n",rst);
    
    return 0;
}