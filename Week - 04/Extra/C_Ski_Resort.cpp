// #include <bits/stdc++.h>

#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
// #include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
using namespace std;
using ll = long long int;
ll factorial(ll n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

ll nCr(ll n, ll r)
{
    if (n < r)
        return 0;
    else
        return factorial(n) / (factorial(r) * factorial(n - r));
}
void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;

    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        if (x <= q)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
    }

    // for (auto i : arr)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    vector<ll> v;

    ll count = 0;
    bool pushed = false;
    for (auto i : arr)
    {
        if (i == 1)
        {
            count++;
            pushed = false;
        }
        else if (i == 0)
        {
            if (!pushed and count)
                v.push_back(count);
            pushed = true;
            count = 0;
        }
    }
    if (arr[n - 1] and count)
        v.push_back(count);

    ll ans = 0;

    for (auto i : v)
    {
        if (i >= k)
        {
            ll a = i - k + 1;
            ans += ((a * (a + 1)) / 2);
        }
    }

    cout << ans << endl;
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