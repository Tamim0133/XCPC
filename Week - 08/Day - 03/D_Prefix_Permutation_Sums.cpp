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

    vector<ll> a(n);

    for (int i = 0; i <= n - 2; i++)
        cin >> a[i];

    ll total = n * (n + 1LL) / 2LL;

    if (a[n - 2] > total)
    {
        cout << "NO" << endl;
        return;
    }

    if (a[n - 2] != total)
    {
        a[n - 1] = total;

        vector<ll> arr;

        for (int i = n - 2; i >= 0; i--)
        {
            arr.push_back(a[i + 1] - a[i]);
        }

        arr.push_back(a[0]);

        bool ok = true;
        vector<bool> visited(n + 1, false);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > n or visited[arr[i]])
            {
                ok = false;
                break;
            }
            visited[arr[i]] = true;
        }

        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        return;
    }

    vector<bool> visited(n + 1, false);
    vector<ll> sums;

    for (int i = 0; i <= n - 2; i++)
    {
        if (i == 0)
        {
            sums.push_back(a[i]);
            if (a[i] <= n)
            {
                visited[a[i]] = true;
            }
        }
        else
        {
            sums.push_back(a[i] - a[i - 1]);
            if (a[i] - a[i - 1] <= n)
            {
                visited[a[i] - a[i - 1]] = true;
            }
        }
    }

    vector<ll> missing;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            missing.push_back(i);
        }
    }

    if (missing.size() != 2)
    {
        cout << "NO" << endl;
        return;
    }

    bool ok = false;

    for (auto i : sums)
    {
        if (missing[0] + missing[1] == i)
        {
            ok = true;
            break;
        }
    }

    if (ok)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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