// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int;

void solve()
{
    int n, h, m;
    cin >> n >> h >> m;

    vector<pair<int, int>> arr;

    int ok = h * 60 + m;

    int diff = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        int temp = x * 60 + y;

        int new_diff = temp - ok;

        if (new_diff < 0)
        {
            new_diff += 1440;
        }

        diff = min(diff, new_diff);
    }

    cout << diff / 60 << " " << diff % 60 << endl;
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