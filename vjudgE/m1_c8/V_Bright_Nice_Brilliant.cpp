#include <bits/stdc++.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        /* code */
        int n;
        scanf("%d", &n);
        printf("1\n");
        for (int i = 2; i <= n; i++)
        {
            /* code */
            printf("1 ");
            for (int j = 0; j < i - 2; j++)
            {
                /* code */
                printf("0 ");
            }
            printf("1\n");
        }
    }

    return 0;
}