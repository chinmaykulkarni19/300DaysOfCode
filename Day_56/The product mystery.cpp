#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void solve()
{
    int b, c;
    cin >> b >> c;
    int a = c / __gcd(b, c);
    cout << a << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}