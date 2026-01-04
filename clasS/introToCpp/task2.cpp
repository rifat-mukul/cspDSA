#include<bits/stdc++.h>
using namespace std;

// call by reference 

int factorial(int &n) {
    int rest=1;
    for (int i = 1; i <=n; i++)
    {
        /* code */
        rest*=i;
    }
    return rest;
}
int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int a,b;
    cin>>a>>b;
    cout<<factorial(a) << " " << factorial(b) << endl; 
    return 0;
}
