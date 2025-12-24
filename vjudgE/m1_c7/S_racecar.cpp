#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    char arrStr[n][51];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%s", arrStr[i]);
    }

    bool isOk = false;
    for (int f = 0; f < n; f++)
    {
        /* code */
        for (int s = 0; s < n; s++)
        {
            /* code */
            if (f == s)
                continue;
            else
            {
                char newStr[101];

                for (int i = 0; i < strlen(arrStr[f]); i++)
                {
                    /* code */
                    newStr[i] = arrStr[f][i];
                }

                for (int i = 0; i < strlen(arrStr[s]); i++)
                {
                    /* code */
                    newStr[strlen(arrStr[f]) + i] = arrStr[s][i];
                }

                newStr[strlen(arrStr[f]) + strlen(arrStr[s])] = '\0';
                bool isPalindrome = true;
                for (int firstID = 0, lastID = strlen(newStr) - 1; firstID < lastID; firstID++, lastID--)
                {
                    /* code */
                    if (newStr[firstID] != newStr[lastID])
                    {
                        /* code */
                        isPalindrome = false;
                    }
                }
                if (isPalindrome)
                {
                    /* code */
                    isOk = true;
                }
            }
        }
    }

    if (isOk)
    {
        /* code */
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}