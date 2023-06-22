#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    char ch;
    cin >> n >> ch;
    string s1;
    cin >> s1;

    string s = s1.append(s1);

    int ans = 0;

    if (ch == 'g')
    {
        cout << 0 << endl;
        return;
    }
    for (int i = 0; i < 2 * n; i++)
    {
        if (s[i] == ch)
        {
            int j = i + 1;
            while (s[j] != 'g' and j < 2 * n)
                j++;

            if (s[j] == 'g')
                ans = max(ans, j - i);
            i = j;
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