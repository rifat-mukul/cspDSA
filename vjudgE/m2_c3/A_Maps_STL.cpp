#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long q;
    cin >> q;
    map<string,int>V;
    while (q--)
    {
        /* code */
        int x,y;
        string name;
        cin >> x >> name;
        if (x==1)
        {
            cin >> y;
            V[name]+=y;

        } else if (x==2)
        {
            V[name] = 0;
        }
        else if (x==3)
        {
            cout << V[name] << "\n";
        }
        
        

    }
    
    return 0;
}