#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> arr;
    ll sum = 0;
    ll count = 0;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        arr.push_back(x);
        sum += abs(x);
    }
    bool flag = 1;
    for (ll i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0 and flag == 1)
        {
            flag = 0;
            count++;
        }
        else if (flag == 0 and arr[i] > 0)
        {
            flag = 1;
        }
    }
    cout << sum << " " << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

// লঙ লঙ প্রশ্নে INt দিয়ে করে ৪ নাম্বার টেস্ট কেস এ WA খেলাম । তারপর এল এল দিয়ে করে AC পেলাম ।