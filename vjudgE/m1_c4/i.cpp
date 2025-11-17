#include <bits/stdc++.h>

int main() {

    int n;
    scanf("%d",&n);
    int arr[n];
    int x=0;
    int range=n;
    while (range--)
    {
        /* code */
        scanf("%d",&arr[x]);
        x++;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     printf("%d\n",arr[i]);
    // }
    
    int dayCount=0;

    for (int i = 1; i < n+1; i++)
    {
        /* code */
        int count=i;
        while (count<=arr[i-1])
        {
            if (count<=9)
            {
                /* code */
                count+=(i*10);
                dayCount++;
            } else {
                if (count <11)
                {
                    count++;
                } else {
                    int first=count%10;
                    int temp=count-first;
                    int second=temp/10;
                    if (i<=9)
                    {
                        /* code */
                        if (i==first && i==second)
                        {
                            /* code */
                            dayCount++;
                            break;
                        } else {
                            if (first==second)
                            {
                                /* code */
                                dayCount++;
                                break;
                            }
                            
                        }
                        
                    }
                    
                }
                
            }
            // printf("%d  ",count);
            
            

        }
        // printf("%d  ",dayCount);
        
    }
    // printf("\n");

    printf("%d",dayCount);
    
    
    return 0;
}