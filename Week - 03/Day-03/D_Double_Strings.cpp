// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long int;

// void solve()
// {
//     int n;
//     cin >> n;

//     vector<string> v(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     for (int k = 0; k < n; k++)
//     {
//         bool flag = 0;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if (k != i and k != j)
//                 {
//                     if (v[k] == v[i] + v[j])
//                     {
//                         flag = 1;
//                     }
//                 }
//             }
//         }
//         if (flag)
//             cout << 1;
//         else
//             cout << 0;
//     }
//     cout << endl;
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

// ei code e TLE khaichi 3rd test case e :)      ... hotasha

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;

    string s[n];
    map<string, bool> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        mp[s[i]] = true;
    }

    for (int i = 0; i < n; i++)
    {
        bool ok = false;
        for (int j = 1; j < s[i].length(); j++)
        {
            string pre = s[i].substr(0, j);
            string post = s[i].substr(j, s[i].length() - j);
            if (mp[pre] and mp[post])
                ok = true;
        }
        cout << ok;
    }
    cout << endl;
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
