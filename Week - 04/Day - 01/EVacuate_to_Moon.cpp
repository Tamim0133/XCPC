#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n, m, h;
    cin >> n >> m >> h;

    vector<ll> cars(n), power(m);

    for (int i = 0; i < n; i++)
        cin >> cars[i];

    for (int i = 0; i < m; i++)
    {
        cin >> power[i];
        // power[i] *= h;
    }

    sort(cars.rbegin(), cars.rend());
    sort(power.rbegin(), power.rend());

    int i = 0;
    int j = 0;
    long long ans = 0;

    // for (auto i : power)
    //     cout << i << " ";
    // cout << endl;

    while (i < n and j < m)
    {
        ans += min(cars[i], power[j] * h);
        i++;
        j++;
    }

    cout << ans << endl;
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