#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            v.push_back({x, i});
        }

        vector<int> b(n), ans(n);

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        sort(v.begin(), v.end());
        sort(b.begin(), b.end());

        int temp = 0;

        for (auto i : v)
        {
            ans[i.second] = b[temp];
            temp++;
        }

        for (auto i : ans)
            cout << i << " ";
        cout << endl;
    }
}