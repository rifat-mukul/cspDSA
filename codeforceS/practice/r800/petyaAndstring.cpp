#include <bits/stdc++.h>

int main() {
    char c1[100]={0},c2[100]={0};
    scanf("%s",&c1);
    scanf("%s",&c2);
    // printf("%s\n",c1);
    // printf("%s",c2);
    // int arr_length1 = sizeof(c1) / sizeof(c1[0]);
    // printf("%d",arr_length1);
    bool flag=true;

    for (int i = 0; i < 100; i++)
    {
        if (tolower(c1[i])<tolower(c2[i]))
        {
            /* code */
            printf("-1\n");
            flag=false;
            break;
        } else if (tolower(c1[i]) > tolower(c2[i]))
        {
            /* code */
            printf("1\n");
            flag=false;
            break;
        }
        
        
    }
    if (flag)
    {
        /* code */
        printf("0\n");
    }
    
    
    return 0;
}