#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    pair<string, string>p[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        string s1,s2;
        cin >> s1 >> s2;
        // cout << s1 << " " << s2 << "\n";
        p[i] = make_pair(s1,s2);
    }

    for (int i = 0; i < m; i++)
    {
        /* code */
        string type, ip;
        cin >> type >> ip;
        ip.pop_back();
        string mType;
        for (int j = 0; j < n; j++)
        {   
            // cout << p[j].second << "==" << ip << "\n";
            if (p[j].second == ip)
            {
                mType = p[j].first;
                break;
                // cout << mType << "\n";
            }
            

        }

        cout << type << " "<< ip << "; " << "#"<<mType << "\n";
        
    }
    
    
    return 0;
}