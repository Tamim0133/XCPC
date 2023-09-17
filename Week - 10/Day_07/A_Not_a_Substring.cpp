#include <bits/stdc++.h>
using namespace std;

bool isOpening(char c)
{
    return c == '(' or c == '{' or c == '[';
}

bool isMatching(char o, char c)
{
    return (o == '(' and c == ')') or (o == '{' and c == '}') or (o == '[' and c == ']');
}

bool isValid(string str, stack<char> s)
{
    for (auto i : str)
    {
        if (isOpening(i))
            s.push(i);
        else if (!s.empty() and isMatching(s.top(), i))
            s.pop();
        else
            s.push(i);
    }
    return s.empty();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        stack<char> s;
        bool first_opening = false;
        bool fist_closing = true;
        bool sec_opening = false;
        bool sec_closing = false;

        string t = str;

        // sort(str.begin(), str.end());
        // cout << "str " << str << endl;
        // cout << sec_opening << endl;
        if (((t[0] == '(' and t[1] == ')')))
        {
            first_opening = true;
            if (t.size() > 2 and t[2] == ')')
                first_opening = false;
        }
        if ((t[0] == ')' and t[1] == '('))
        {
            first_opening = true;
        }
        if (str == "()")
        {
            cout << "NO" << endl;
        }
        else if (first_opening)
        {
            int k = t.size();
            cout << "YES" << endl;
            for (int i = 0; i < k; i++)
            {
                cout << "(";
            }
            for (int i = 0; i < k; i++)
            {
                cout << ")";
            }

            cout << endl;

            // cout << "(())" << endl;
        }
        else
        {
            int k = t.size();
            cout << "YES" << endl;
            while (k--)
            {
                cout << "()";
            }
            cout << endl;
        }
    }
    return 0;
}