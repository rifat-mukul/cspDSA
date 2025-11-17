#include <bits/stdc++.h>

int main() {
    int n,p,q,r,s;
    scanf("%d %d %d %d %d",&n,&p,&q,&r,&s);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     printf("%d ",arr[i]);
    // }
    int fastArr[(q-p)+1];
    int cnt1=0;
    for (int i = p-1; i < q; i++)
    {
        /* code */
        fastArr[cnt1] = arr[i];
        cnt1++;
    }
    // for (int i = 0; i < (q-p)+1; i++)
    // {
    //     /* code */
    //     printf("%d ",fastArr[i]);
    // }
    
    int endArr[(s-r)+1];
    int cnt2=0;
    for (int i = r-1; i < s; i++)
    {
        /* code */
        endArr[cnt2]=arr[i];
        cnt2++;
    }
    
    // for (int i = 0; i < (s-r)+1; i++)
    // {
    //     /* code */
    //     printf("%d ",endArr[i]);
    // }

    int newArr[n];

    for (int i = 0; i < p; i++)
    {
        newArr[i]=arr[i];
    }

    
    int cnt3=0;
    for (int i = p-1; i < q; i++)
    {
        /* code */
        newArr[i]=endArr[cnt3];
        cnt3++;
        // printf("%d ",newArr[i]);
    }

    for (int i = q; i < r-1; i++)
    {
        /* code */
        newArr[i]=arr[i];
        // printf("%d ",i);
    }

    int cnt4=0;
    for (int i = r-1; i < s; i++)
    {
        /* code */
        newArr[i]=fastArr[cnt4];
        cnt4++;
        // printf("%d ",i);
    }

    for (int i = s; i < n; i++)
    {
        /* code */
        newArr[i]=arr[i];
        // printf("%d ",i);

    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d ",newArr[i]);
    }
    printf("\n");
    


    return 0;
}