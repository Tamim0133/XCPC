#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll count = 0;

    if (b > a)
        count++;
    if (c > a)
        count++;
    if (d > a)
        count++;

    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}