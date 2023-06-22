#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n, q;
    cin >> n >> q;

    ll odd = 0, even = 0, sum = 0;

    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];

        sum += arr[i];

        if (arr[i] % 2 == 1)
            odd++;
        else if (arr[i] % 2 == 0)
            even++;
    }

    while (q--)
    {
        ll type, x;
        cin >> type >> x;

        if (type == 1)
            sum += (odd * x);
        else
            sum += (even * x);

        cout << sum << endl;

        if (type == 0 and x % 2)
        {
            odd += even;
            even = 0;
        }
        else if (type == 1 and x % 2)
        {
            even += odd;
            odd = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}