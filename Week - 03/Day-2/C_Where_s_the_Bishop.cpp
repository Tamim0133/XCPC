#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    char arr[9][9];

    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            if (arr[i][j] == '#' and arr[i - 1][j - 1] == '#' and arr[i - 1][j + 1] == '#' and arr[i + 1][j - 1] == '#' and arr[i + 1][j + 1] == '#')
                cout << i << " " << j << endl;
        }
    }
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