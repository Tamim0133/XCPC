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

vector<ll> v(23);

void solve()
{
    ll n;
    cin >> n;

    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    ll count = 0;
    if (arr[n - 1] < n)
    {
        cout << -1 << endl;
        return;
    }
    for (ll i = arr.size() - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            continue;
        }
        else
        {
            if (arr[i] >= arr[i + 1])
            {
                int x = (round)(log(arr[i]) / log(arr[i + 1]));
                count += x;
                cout << " x " << x << endl;
                // cout << pow(2, x) << endl;
                arr[i] /= pow(2, x);
                cout << "ARR[i]" << arr[i] << endl;
                // if (arr[i] == 0 and i != 0)
                // {
                //     cout << -1 << endl;
                //     return;
                // }
            }
        }
    }
    cout << count << endl;

    // cout << "ANS" << (int)(log(21) / log(10) + 1) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 23; i++)
    {
        v[i] = pow(2, i);
    }
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}