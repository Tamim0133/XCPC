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
// #include <cll types>
// #include <cstdalign>
#include <cstdbool>
// #include <cstdll >
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

void solve()
{
    ll n;
    cin >> n;

    deque<ll> ans;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ans.push_back(x);
    }

    while (ans.size() > 3)
    {
        ll a = ans.front();
        ans.pop_front();

        ll b = ans.front();
        ans.pop_front();

        ll c = ans.front();
        ans.pop_front();

        ll mini = min(a, (min(b, c)));

        if (b == mini or (a + c > a and a + c > c))
        {
            ans.push_front(a + c);
        }
        else if (a == mini)
        {
            ans.push_front(c);
            ans.push_front(b);
        }
        else if (c == mini)
        {
            if (!ans.empty())
            {
                ll y = ans.front();
                ans.pop_front();
                ans.push_front(y + b);
            }
            else
            {
                ans.push_front(b);
                ans.push_front(a);
            }
        }
    }

    if (ans.size() == 1)
    {
        cout << ans.front() << endl;
        return;
    }
    else if (ans.size() == 2)
    {
        ll d = ans.front();
        ans.pop_front();
        ll e = ans.front();

        cout << max(d, e) << endl;
        return;
    }
    else
    {
        ll a = ans.front();
        ans.pop_front();

        ll b = ans.front();
        ans.pop_front();

        ll c = ans.front();

        cout << max(c, (max(a, (max(a + c, b))))) << endl;
    }
    // while (!ans.empty())
    // {
    //     cout << ans.front() << " ";
    //     ans.pop_front();
    // }
    // cout << endl;
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