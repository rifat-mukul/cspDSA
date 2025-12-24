#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    scanf("%d",&n);

    int people[1001],time[1001];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d%d",&people[i],&time[i]);
    }

    int answer=0;
    for (int m_time = 0; m_time < 24; m_time++)
    {
        int count=0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            int c_time=m_time+time[i];
            if (c_time>=24) {
                c_time-=24;
            }
            if (c_time>=9 && c_time<18)
            {
                count+=people[i];
            }
            
            
        }
        answer=max(answer,count);
        
    }

    printf("%d\n",answer);
    
    
    return 0;
}