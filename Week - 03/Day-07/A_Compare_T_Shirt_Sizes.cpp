#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

float value(string s)
{
    if (s[s.size() - 1] == 'M')
        return 5;
    else if (s[s.size() - 1] == 'S')
        return 4 / (float)s.size();
    else
        return 6 * (float)s.size();
}

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;

    // cout << value(s1) << " " << value(s2) << endl;

    if (value(s1) == value(s2))
        cout << "=" << endl;
    else if (value(s1) < value(s2))
        cout << "<" << endl;
    else if (value(s1) > value(s2))
        cout << ">" << endl;
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