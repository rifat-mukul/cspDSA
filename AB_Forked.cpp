#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        long long a,b,xk,yk,xq,yq;
        scanf("%lld%lld",&a,&b);
        scanf("%lld%lld",&xk,&yk);
        scanf("%lld%lld",&xq,&yq);
        int king[8][2], queen[8][2];

        // king 

        king[0][0]=xk+a;
        king[0][1]=yk+b;

        king[1][0]=xk+a;
        king[1][1]=yk+b;

        king[2][0]=xk-a;
        king[2][1]=yk+b;

        king[3][0]=xk-a;
        king[3][1]=yk+b;

        king[4][0]=xk-a;
        king[4][1]=yk-b;

        king[5][0]=xk-a;
        king[5][1]=yk-b;

        king[6][0]=xk+a;
        king[6][1]=yk-b;

        king[7][0]=xk+a;
        king[7][1]=yk-b;

        // queen 

        queen[0][0]=xq+a;
        queen[0][1]=yq+b;

        queen[1][0]=xq+a;
        queen[1][1]=yq+b;

        queen[2][0]=xq-a;
        queen[2][1]=yq+b;

        queen[3][0]=xq-a;
        queen[3][1]=yq+b;

        queen[4][0]=xq-a;
        queen[4][1]=yq-b;

        queen[5][0]=xq-a;
        queen[5][1]=yq-b;

        queen[6][0]=xq+a;
        queen[6][1]=yq-b;

        queen[7][0]=xq+a;
        queen[7][1]=yq-b;


        int count=0;

        for (int i = 0; i < 8; i++)
        {
            /* code */
            for (int j = 0; j < 8; j++)
            {
                /* code */
                if (king[i][0]==queen[j][0] && king[i][1]==queen[j][1])
                {
                    /* code */
                    count++;
                    // printf("%d %d-----%d %d\n",king[i][0],king[i][1], queen[j][0], queen[j][1]);
                }
                
            }
            
        }

        printf("%d\n",count);
        

    }
    
    return 0;
}