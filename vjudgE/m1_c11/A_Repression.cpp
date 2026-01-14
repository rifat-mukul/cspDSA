#include <bits/stdc++.h>

using namespace std;

int sum(int a, int b, int c)
{
    return a + b + c;
}
int min(int a, int b, int c)
{
    if (a < b && a < c)
    {
        return a;
    }
    else if (b < c)
    {
        /* code */
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    int sm = sum(a, b, c);
    int mn = min(a, b, c);
    cout << sm - mn << "\n";
    return 0;
}