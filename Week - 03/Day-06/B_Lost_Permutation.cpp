#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

vector<int> arr(100 + 1);

int solve()
{
    int m, s;
    cin >> m >> s;
    vector<bool> v(100 + 1, false);
    int maxo = 0;
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        maxo = max(maxo, temp);
        v[temp] = true;
    }
    for (int i = maxo; i <= 100; i++)
    {
        int sum = (i * (i + 1)) / 2;
        int temp_m = 0;
        for (int j = 1; j <= i; j++)
        {
            if (v[j] == true)
            {
                sum -= j;
                temp_m++;
            }
        }
        if (sum == s && temp_m == m)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int s = 0;
    for (int i = 1; i <= 100; i++)
    {
        s += i;
        arr[i] = s;
    }
    while (t--)
    {
        solve();
    }
    return 0;
}