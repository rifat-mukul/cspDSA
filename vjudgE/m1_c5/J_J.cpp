#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    
    char arr[n][n]; 
    
    for (int i = 0; i < n; i++)
    {
        scanf("%s",arr[i]);
    }

    char temp = arr[0][0];

    for (int i = 0; i < n - 1; i++)
    {
        arr[i][0] = arr[i+1][0];
    }
    
    for (int j = 0; j < n - 1; j++)
    {
        arr[n-1][j] = arr[n-1][j+1];
    }

    for (int i = n - 1; i > 0; i--)
    {
        arr[i][n-1] = arr[i-1][n-1];
    }

    for (int j = n - 1; j > 1; j--)
    {
        arr[0][j] = arr[0][j-1];
    }

    arr[0][1] = temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}