#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n,b,d;
    cin >> n >> b >> d;
    int sm=0, flash=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int mesure;
        cin >> mesure;
        if (mesure <= b)
        {
            sm += mesure;
            if (sm > d)
            {
                flash++;
                sm = 0;
            }
        }
    }
    cout << flash << "\n";
    
    return 0;
}