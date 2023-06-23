#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    stack<string> st;

    // map<string, int> map;
    set<string> set;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        // char a = s[s.size() - 2];
        // char b = s[s.size() - 1];

        // string temp;
        // temp.push_back(a);
        // temp.push_back(b);

        st.push(s);
    }

    while (!st.empty())
    {
        // map[st.top()]++;

        // if (map[st.top()] > 0)
        //     continue;
        // else
        //     cout << st.top();

        if (set.find(st.top()) == set.end())
        {
            string t = st.top();
            cout << t[t.size() - 2] << t[t.size() - 1];
        }
        set.insert(st.top());

        st.pop();
    }

    return 0;
}