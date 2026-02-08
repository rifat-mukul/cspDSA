#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    pair<int, int>pr1= {1,2};
    pair<string,int>pr2 = {"rony",45};

    cout << pr1.first <<" " << pr1.second << "\n";

    pair<int,string> pr3;
    pr3 = make_pair(2,"hello");
    cout << pr3.first <<" " << pr3.second << "\n";

    pair<pair<string,int>,int> pr4;
    pr4 = make_pair(make_pair("abi",43),100);
    cout << pr4.first.first <<" " << pr4.first.second <<" " << pr4.second << "\n";

    return 0;
}