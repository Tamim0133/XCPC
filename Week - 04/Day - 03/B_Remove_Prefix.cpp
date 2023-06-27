#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;

    set<int> set;
    vector<int> v;

    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;

        v.push_back(a);
    }
    reverse(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        set.insert(v[i]);
        if (set.size() < i + 1)
        {
            break;
        }
    }
    cout << n - set.size() << endl;
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