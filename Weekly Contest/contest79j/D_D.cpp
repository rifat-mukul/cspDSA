#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr[i] = num;
    }

    int first = arr[0];

    int pos=-1;
    bool found = false;

    for (int i = 1; i < n; i++)
    {
        /* code */
        if (arr[i] > first)
        {
            /* code */
            pos = i;
            found=true;
            break;
        }
        
    }

    if (found)
    {
        cout << pos+1 << "\n";
    } else
    {
        cout << pos << "\n";
    }
    
    
    
    
    return 0;
}