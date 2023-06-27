#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;

    if (n <= 9)
    {
        cout << n << endl;
        return;
    }

    else
    {
        int i = 9;
        while (i < n)
        {
            n -= i;
            v.push_back(i);
            i--;
        }
        if (n)
            v.push_back(n);
    }
    reverse(v.begin(), v.end());

    for (auto i : v)
        cout << i;
    cout << endl;
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