#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;

    vector<ll> power;
    for (int i = 0; i < 10; i++)
    {
        power.push_back(pow(10, i));
    }

    sort(power.rbegin(), power.rend());

    for (auto i : power)
    {
        if (i <= n)
        {
            cout << n - i << endl;
            break;
        }
    }
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