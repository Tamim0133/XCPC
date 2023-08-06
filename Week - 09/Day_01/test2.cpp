/*\~~~~~~~~~~~~~~~~~\
   \    TOUFIK       \
    \        ISLAM    \
     \~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e6 + 5;
const int M = (int)1e9 + 5;
const int md = (int)1e9 + 7;

#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define mii map<int, int>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define ff first
#define ss second
#define all(t) t.begin(), t.end()
#define rall(t) t.rbegin(), t.rend()
#define pb push_back
#define nl '\n'
#define sp << ' ' <<
#define print_ara(x, st, ed)      \
    for (int i = st; i < ed; i++) \
        cout << x[i] << " \n"[i == ed - 1];
#define print_map(t) \
    for (auto u : t) \
        cout << u.ff sp u.ss << nl;
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void TC()
{
    int n, k, q;
    cin >> n >> k >> q;
    vll A;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        A.pb(x);
    }
    A.pb(0);
    vector<pair<pii, int>> serial;
    for (int i = 0, l, r, v; i < k; ++i)
    {
        cin >> l >> r >> v;
        serial.pb({{--l, r}, v});
    }
    vi mp(k + 1);
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        mp[--l]++;
        mp[r]--;
    }
    for (int i = 1; i <= k; ++i)
        mp[i] += mp[i - 1];

    vll add(n + 1);
    for (int i = 0; i < k; ++i)
    {
        int l = serial[i].ff.ff;
        int r = serial[i].ff.ss;
        ll v = serial[i].ss;

        add[l] += v * mp[i];
        add[r] -= v * mp[i];
    }

    for (int i = 1; i < n; i++)
        add[i] += add[i - 1];

    for (int i = 0; i < n; i++)
        A[i] += add[i];

    print_ara(A, 0, n);
}

int main()
{
    FastIO;

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout << "Case " << i << ": ";
        TC();
    }
    return 0;
}
