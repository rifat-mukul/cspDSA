#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    set<int> st;
    for (int i = 0; i < 10; i++)
    {
        st.insert(i);
    }

    for(auto it:st){
        cout << it << "  ";
    }
    cout << "==========" << "\n";
    
    st.erase(2);

    for(auto it:st){
        cout << it << "  ";
    }
    cout << "\n";
    // st.find(3);
    if (st.find(3) != st.end())
    {
        cout << "YES" << "\n";
    }
    
    // distance(st.begin(), st.end(), 4);
    cout << *st.upper_bound(5) << "\n";
    cout << *st.lower_bound (5) << "\n";
    
    return 0;
}