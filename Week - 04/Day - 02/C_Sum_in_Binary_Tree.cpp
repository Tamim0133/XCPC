#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n;
    cin >> n;

    ll sum = 0;
    while (n > 0)
    {
        sum += n;
        n /= 2;
    }
    cout << sum << endl;
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

// প্রথম তিনটা কুসসেন আগের কন্টেস্ট এ পারছিলাম । বাট নেক্সট টা কষ্ট হবে । বিএফ এস দিয়ে করা লাগবে ।