#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int arr1[t];
    for (int i = 0; i < t; i++)
    {
        /* code */
        int num;
        cin >> num;
        arr1[i] = num;
    }

    int x;
    cin >> x;
    int arr2[x];
    for (int i = 0; i < x; i++)
    {
        /* code */
        int num;
        cin >> num;
        arr2[i] = num;
    }

    vector<int>v;

    for (int i = 0; i < t; i++)
    {
        /* code */
        bool flag = true;
        for (int j = 0; j < x; j++)
        {
            if (arr1[i] == arr2[j])
            {
                flag=false;
                break;
            }
            

        }
        if (flag)
        {
            v.push_back(arr1[i]);
        }
        
        
    }

    cout << v.size() << "\n";

    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout << v[i] << " ";
    }
    cout << "\n";
    
    
    
    // cout << result.size() << "\n";
    // for(int it:result) {
    //     cout << it << " ";
    // }
    // cout << "\n";
    
    
    return 0;
}