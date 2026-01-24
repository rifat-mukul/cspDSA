#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long q;
    cin >> q;
    int count = 0;
    bool play = false;
    for (long long i = 0; i < q; i++)
    {
        /* code */
        int num;
        cin >> num;
        if (num==1)
        {
            /* code */
            count ++;
        } else if (num == 2)
        {
            /* code */
            // if(count>=1) count--;
            if (count >=1)
            {
                count--;
            }
            
        } else if (num==3)
        {
            if (play)
            {
                /* code */
                play=false;
            } else {
                play = true;
            }
            
            
        }
        if(count >= 3 && play) {
            cout << "Yes" << "\n";
        } else
        {
            cout << "No" << "\n";
        }
        

    }
    
    return 0;
}