#include <bits/stdc++.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arrA[n], arrB[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &arrA[i]);
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &arrB[i]);
    }

    int countA = 0, countB = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arrA[i] != arrB[i])
        {
            /* code */
            countA += arrA[i];
            countB += arrB[i];
        }
    }
    
    // printf("%d %d\n",countA, countB);
    if (countA == 0)
    {
        /* code */
        printf("-1\n");
    }
    else
    {   
        countB++;
        int val = ((countB+countA - 1) / countA);
        printf("%d\n", val);
    }

    return 0;
}