#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int h;
    cin >> h;
    vector<int>v(h);
    for (int i = 0; i < h; i++) {
        cin >> v[i];
    }
    int index = 0;
    bool found = false;
    for (int i = 1; i < h; i++)
    {
        /* code */
        if(v[i] > v[0]) {
            index=i;
            cout<<index+1<<"\n";
            found = true;
            break;
        }
    }
    if(!found) {
        cout<<"-1\n";
    }
    
    return 0;
}