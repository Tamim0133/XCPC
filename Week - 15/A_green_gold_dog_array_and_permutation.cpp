#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            v.push_back({x, i});
        }

        sort(v.rbegin(), v.rend());
        int temp = 1;
        vector<int> ans(n);
        for (auto i : v)
        {
            int k = i.second;
            ans[k] = temp;
            temp++;
        }

        for (auto i : ans)
            cout << i << " ";
        cout << endl;
    }
}