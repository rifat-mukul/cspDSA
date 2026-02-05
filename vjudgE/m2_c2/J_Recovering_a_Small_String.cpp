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
        string s="aaa";
        int num;
        cin >> num;
        num-=3;
        int temp = min(25,num);
        s[2]+=temp;
        num-=temp;
        temp = min(25,num);
        s[1]+=temp;
        num-=temp;

        temp = min(25,num);
        s[0]+=temp;
        num-=temp;
        cout << s << "\n";

    }
    
    return 0;
}