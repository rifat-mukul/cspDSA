#include<bits/stdc++.h>

int main() {
    char arr[100];
    scanf("%s",arr);
    int ln=strlen(arr);
    int range=ln+(ln-1);
    int count=0;
    for (int i = 1; i <= range; i++)
    {
        /* code */
        if (i%2!=0)
        {
            /* code */
            printf("%c",arr[count]);
            count++;
        } else {
            printf(" ");
        }
        
    }
    printf("\n");
    
    return 0;
}