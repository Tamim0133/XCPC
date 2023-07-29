#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <utility>
#include <set>
#include <unordered_set>
#include <list>
#include <iterator>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <bitset>
#include <random>
#include <map>
#include <unordered_map>
#include <stdio.h>
#include <complex>
#include <math.h>
#include <cstring>
#include <chrono>
#include <string>

using namespace std;

#define dusty                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ll long long
#define umap unordered_map
#define uset unordered_set
#define lb lower_bound
#define ub upper_bound
#define fo(i, a, b) for (i = a; i <= b; i++)
#define all(v) (v).begin(), (v).end()
#define all1(v) (v).begin() + 1, (v).end()
#define allr(v) (v).rbegin(), (v).rend()
#define allr1(v) (v).rbegin() + 1, (v).rend()
#define sort0(v) sort(all(v))
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
#define sz(x) (ll) x.size()
#define pb push_back
#define ppb pop_back
#define mkp make_pair
#define inf 1000000000000000005
const ll mod = 1e9 + 7;

int main()
{
    dusty;
    ll t, n, i, j, ans, temp, sum;
    string sans;
    t = 1;
    cin >> t;
    while (t--)
    {
        // sans = "NO";
        ans = temp = sum = 0;
        cin >> n;

        vll a(n + 1, 0);

        fo(i, 1, n)
        {
            cin >> a[i];
        }
        multiset<int> set;
        fo(i, 1, n)
        {
            int x = a[i];
            auto it = set.find(a[i]) - set.begin();

            if (it != set.end())
            {
                ans += *it;
                cout < < < < " " << x << endl;
            }
            set.insert(x);
        }

        cout << ans << "\n";
    }
    return 0;
}