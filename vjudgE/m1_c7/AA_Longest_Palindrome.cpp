#include <bits/stdc++.h>
using namespace std;

int main()
{
    char strA[101];
    scanf("%s", &strA);
    int n = strlen(strA);
    int ans = 0;
    for (int le = 0; le <= n; le++)
    {
        for (int re = 0; re <= n; re++)
        {
            if (le + re > n)
                continue;
            int l = le;
            int r = n - re - 1;
            bool isPalindrom = true;
            for (int i = 0; l + i <= r - i; i++)
            {
                if (strA[l + i] != strA[r - i])
                {
                    isPalindrom = false;
                }
            }
            if (isPalindrom)
            {
                ans = max(ans, r - l + 1);
            }
        }
    }
    printf("%d\n", ans);

    return 0;
}