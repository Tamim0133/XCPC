// টিউটোরিয়াল দেখে বুঝে বুঝে করেছি । নিজে নিযে পারিনি ।
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int sum = 0;
            int ci = i, cj = j; // current i and current j

            while (ci >= 0 and ci < n and cj >= 0 and cj < m)
            {
                sum += arr[ci][cj];
                ci--;
                cj--;
            }
            ci = i, cj = j; // current i and current j
            while (ci >= 0 and ci < n and cj >= 0 and cj < m)
            {
                sum += arr[ci][cj];
                ci++;
                cj++;
            }
            ci = i, cj = j;
            while (ci >= 0 and ci < n and cj >= 0 and cj < m)
            {
                sum += arr[ci][cj];
                ci--;
                cj++;
            }
            ci = i, cj = j;
            while (ci >= 0 and ci < n and cj >= 0 and cj < m)
            {
                sum += arr[ci][cj];
                ci++;
                cj--;
            }
            sum -= arr[i][j] * 3;
            ans = max(ans, sum);
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