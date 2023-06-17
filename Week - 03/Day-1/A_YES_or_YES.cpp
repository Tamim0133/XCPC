#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{

    string s;
    cin >> s;

    if ((s[0] == 'Y' or s[0] == 'y') and (s[1] == 'E' or s[1] == 'e') and (s[2] == 'S' or s[2] == 's'))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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