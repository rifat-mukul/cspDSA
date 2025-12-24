#include <bits/stdc++.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, k;
        scanf("%d%d", &x, &k);
        for (int y = x;; y++)
        {
            /* code */
            int sum = 0;
            int val = y;
            while (val > 0)
            {
                /* code */
                sum = sum + val % 10;
                val = val / 10;
            }
            if (sum % k == 0)
            {
                printf("%d\n", y);
                break;
            }
        }
    }

    return 0;
}