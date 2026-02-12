#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        
        pair<int, int>d,pos={0,0};
        cin >> d.first >> d.second;

        string s;
        cin >>  s;
        if (pos == d)
        {
            /* code */
            cout << "YES" << "\n";
            continue;
        }

        string ans = "NO";

        for (int i = 0; i < 100; i++)
        {
            for(auto c : s) {
                if (c=='N')
                {
                    /* code */
                    pos.second++;
                } else if (c=='S')
                {
                    /* code */
                    pos.second--;
                } else if (c=='E')
                {
                    /* code */
                    pos.first++;
                } else
                {
                    pos.first--;
                }

                if (pos==d)
                {
                    /* code */
                    ans="YES";
                }
                
            }
        }
        cout << ans << "\n";
        
        
    }
    
    return 0;
}