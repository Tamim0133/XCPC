#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;

    if (n == 1 or n == 3)
    {
        cout << -1 << endl;
        return;
    }
    if (n == 2)
    {
        cout << "2 1" << endl;
        return;
    }

    for (int i = 3; i <= n; i++)
        cout << i << " ";

    cout << "2 1" << endl;
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