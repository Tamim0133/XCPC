#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    long long n, q;
    cin >> n >> q;
    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        long long x = arr[i];
        mp[x].push_back(i);
    }

    // for (auto i : mp)
    // {
    //     cout << i.first << " -> ";
    //     for (auto j : i.second)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    while (q--)
    {
        int a, b;
        cin >> a >> b;

        if (mp[a].empty() or mp[b].empty())
        {
            cout << "NO" << endl;
            continue;
        }

        else if (a == b)
        {
            cout << "YES" << endl;
            continue;
        }
        else if (mp[a].front() < mp[b].back())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
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