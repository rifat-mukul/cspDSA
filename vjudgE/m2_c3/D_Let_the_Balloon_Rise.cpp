#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while (1)
    {
        /* code */
        map<string,int> cnt;
        string s;
        int n;
        cin >> n;
        if (n==0)
        {
            /* code */
            break;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            cnt[s]++;
        }

        int maxCount = 0;
        string ans = "";
        // string ans = "";
        for(auto pr:cnt) {
            if (pr.second > maxCount)
            {
                maxCount = pr.second;
                ans=pr.first;
            }
            
        }
        cout << ans << "\n";
        
        
    }
    
    return 0;
}