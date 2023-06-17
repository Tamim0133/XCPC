#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        mp[x]++;
    }
    if ((n - mp.size()) % 2)
        cout << n - (n - mp.size() + 1) << endl;
    else
        cout << n - (n - mp.size()) << endl;
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