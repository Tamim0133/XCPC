#include <bits/stdc++.h>
#include<iostream>
#include<set>
using namespace std;
using ll = long long int;

void solve()
{
    string s;
    cin >> s;

    set<char> st;
    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        st.insert(s[i]);

        if (st.size() == 4)
        {
            st.clear();
            count++;
            i--;
        }
    }

    if (!st.empty())
        count++;

    cout << count << endl;
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