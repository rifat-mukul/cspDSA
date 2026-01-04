#include<bits/stdc++.h>
using namespace std;


// inparemiter a is value and &a is position of that value

void func(int &a) { 
    a=100;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a;
    cin>>a;
    func(a);
    cout<<a<<'\n'; //use \n insted of endl for faster execution 
    return 0;
}