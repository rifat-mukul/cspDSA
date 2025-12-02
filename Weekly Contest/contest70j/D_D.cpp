#include<bits/stdc++.h>

int main() {
    char arr[100];
    scanf("%s",arr);
    int ln=strlen(arr);
    int st=0,end=0,count=1;
    for (int i = 0; i < ln; i++)
    {
        /* code */
        if (arr[i]=='|')
        {
            /* code */
            // printf("%d",i);
            if (count==1)
            {
                /* code */
                st=i;
                count++;
            } else {
                end=i;
            }
            
        }
        
    }
    // printf("%d %d",st,end);
    for (int i = 0; i < st; i++)
    {
        /* code */
        printf("%c",arr[i]);
    }
    for (int i = end+1; i < ln; i++)
    {
        /* code */
        printf("%c",arr[i]);
    }
    printf("\n");
    
    
    return 0;
}