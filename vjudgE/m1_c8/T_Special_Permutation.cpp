#include <bits/stdc++.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        /* code */
        int n, a, b;
        scanf("%d%d%d", &n, &a, &b);
        int arr[n];
        arr[0] = a, arr[n - 1] = b;
        int val = n;
        for (int i = 1; i < n - 1;)
        {
            /* code */
            if (val == a || val == b)
            {
                /* code */
                val--;
                continue;
            }
            arr[i] = val;
            val--;
            i++;
        }
        int oK = 1, mn = a, mx = b;
        for (int i = 0; i < n / 2; i++)
        {
            /* code */
            if (mn > arr[i])
            {
                /* code */
                mn = arr[i];
            }
        }
        for (int i = n / 2; i < n; i++)
        {
            /* code */
            if (mx < arr[i])
            {
                /* code */
                mx = arr[i];
            }
        }
        if (mn != a || mx != b)
        {
            /* code */
            printf("-1\n");
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            /* code */
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}