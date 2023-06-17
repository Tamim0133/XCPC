#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int cost(string a, string b)
{
    int k = a.size();

    int ans = 0;

    for (int i = 0; i < k; i++)
    {
        ans += abs(a[i] - b[i]);
    }
    return ans;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<string> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                ans = min(ans, cost(arr[i], arr[j]));
            }
        }
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