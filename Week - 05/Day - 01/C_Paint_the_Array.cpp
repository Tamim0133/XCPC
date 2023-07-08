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

void solve()
{
    ll n;
    cin >> n;

    vector<ll> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll a = arr[0], b = arr[1];
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            a = gcd(a, arr[i]);
        }
        else
        {
            b = gcd(b, arr[i]);
        }
    }
    bool a_ok = true, b_ok = true;
    if (a != 1)
    {
        for (int i = 1; i < n; i += 2)
        {
            if (arr[i] % a == 0)
            {
                a = 1;
                break;
            }
        }
    }
    if (b != 1)
    {
        for (int i = 0; i < n; i += 2)
        {
            if (arr[i] % b == 0)
            {
                b = 1;
                break;
            }
        }
    }

    ll ans = max(a, b);
    if (ans == 1)
        cout << 0 << endl;
    else
        cout << ans << endl;
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