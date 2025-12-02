#include<bits/stdc++.h>

int main() {
    int n;
    scanf("%d",&n);
    char arr[n];
    scanf("%s",arr);
    int icount=0,acount=0;
    int arrChr[3]={0};
    for (int i = 0; i < n; i++)
    {
        /* code */
        int po=arr[i]-'A';
        if (arrChr[po]==0)
        {
            /* code */
            arrChr[po]=1;
            acount++;
            if (acount==3)
            {
                /* code */
                icount=i+1;
                break;
            }
            
        }
        
        
        
        
    }
    printf("%d\n",icount);
    
    return 0;
}