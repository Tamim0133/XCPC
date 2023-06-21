/*
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool ok = true;
    if ((s[0] == 'm' or s[0] == 'M') and (s[n - 1] == 'w' or s[n - 1] == 'W'))
        ok = true;
    else
        ok = false;

    if (!ok)
    {
        cout << "NO" << endl;
        return;
    }

    for (int i = 1; i < n; i++)
    {
        if (s[i] == 'm' or s[i] == 'M')
        {
            if (s[i - 1] == 'm' or s[i - 1] == 'M')
                ok = true;
            else
                ok = false;
        }
        else if (s[i] == 'e' or s[i] == 'E')
        {
            if (s[i - 1] == 'e' or s[i - 1] == 'E' or s[i - 1] == 'm' or s[i - 1] == 'M')
                ok = true;
            else
                ok = false;
        }
        else if (s[i] == 'o' or s[i] == 'O')
        {

            if (s[i - 1] == 'o' or s[i - 1] == 'O' or s[i - 1] == 'e' or s[i - 1] == 'E')
                ok = true;
            else
                ok = false;
        }
        else if (s[i] == 'w' or s[i] == 'W')
        {
            if (s[i - 1] == 'w' or s[i - 1] == 'W' or s[i - 1] == 'o' or s[i - 1] == 'O')
                ok = true;
            else
                ok = false;
        }
    }

    if (ok)
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
*/
// Got wa on testcase 2

// Watched the tutorial to get an idea

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

string to_lower(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] <= 90 && s[i] >= 65)
            s[i] += 32;
    }
    // cout << s << endl;
    return s;
}

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    s = to_lower(s);
    // sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());

    // cout << s << endl;

    if (s == "meow")
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