#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        /* code */
        char arrA[51];
        scanf("%s", &arrA);
        int n = strlen(arrA);

        bool isOk = false;
        for (int A = 0; A < 2; A++)
        {
            /* code */
            for (int B = 0; B < 2; B++)
            {
                /* code */
                for (int C = 0; C < 2; C++)
                {
                    bool isValid = true;
                    int o = 0, cl = 0;
                    for (int i = 0; i < n; i++)
                    {
                        if (arrA[i] == 'A')
                        {
                            if (A == 0)
                                o++;
                            else
                                cl++;
                        }

                        else if (arrA[i] == 'B')
                        {
                            if (B == 0)
                                o++;
                            else
                                cl++;
                        }
                        else
                        {
                            if (C == 0)
                                o++;
                            else
                                cl++;
                        }
                        if (o < cl)
                        {
                            /* code */
                            isValid = false;
                        }
                    }
                    if (o != cl)
                    {
                        /* code */
                        isValid = false;
                    }

                    if (isValid)
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
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}