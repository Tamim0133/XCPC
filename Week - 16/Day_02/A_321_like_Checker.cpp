#include <bits/stdc++.h>
using namespace std;
#define ll long long int;

void solve()
{
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int n = s.size();
    bool ok = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i + 1] >= s[i])
        {
            ok = false;
            break;
        }
    }

    if (ok)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}