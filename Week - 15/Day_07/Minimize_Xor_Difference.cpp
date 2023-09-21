#include <bits/stdc++.h>
using namespace std;
#define ll long long int;

void solve()
{
    int a, b;
    cin >> a >> b;

    if (a < b)
        swap(a, b);

    int bit = -1;

    for (int i = 30; i >= 0; i--)
    {
        int x = (1 << i);
        if ((a & x) != (b & x))
        {
            bit = i; // most significant bit pailam
            break;
        }
    }
    int ans = 0;
    for (int i = bit - 1; i >= 0; i--)
    {
        int x = 1 << i;
        if ((a & x) > 0 and (b & x) == 0)
        {
            ans += x;
        }
    }
    cout << ans << endl;
    // cout << "ans : " << (a ^ ans) - (b ^ ans) << endl;
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