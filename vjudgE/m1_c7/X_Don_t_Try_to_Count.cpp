#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        /* code */
        int n, m;
        char strX[801], strS[26];
        scanf("%d%d%s%s", &n, &m, strX, strS);
        int ans = -1;
        for (int op = 0; op <= 5; op++)
        {
            /* code */
            bool isSubstring = false;
            for (int i = 0; i + m <= n; i++)
            {
                /* code */
                bool match = true;
                for (int j = 0; j < m; j++)
                {
                    if (strX[i + j] != strS[j])
                    {
                        /* code */
                        match = false;
                    }
                }
                if (match)
                {
                    /* code */
                    isSubstring = true;
                }
            }
            if (isSubstring)
            {
                /* code */
                ans = op;
                break;
            }
            if (op == 5){
                break;
            }
                
            for (int i = 0; i < n; i++)
            {
                /* code */
                strX[n + i] = strX[i];
            }
            n = n * 2;
            strX[n] = '\0';
        }
        printf("%d\n", ans);
    }

    return 0;
}