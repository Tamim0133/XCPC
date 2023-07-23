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
    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll sum = 0, sum_sq = 0;

    for (auto i : arr)
    {
        sum += i;
        sum_sq += pow(i, 2);
    }

    ll a = 4 * n;
    ll b = 4 * sum;
    ll c = sum_sq - k;

    ll d = ((b * b) - (4 * a * c));
    cout << "a " << a << " b " << b << " c " << c << " d " << sqrt(d) << endl;
    ll root1, root2;

    if (d == 0)
    {
        cout << ((b * -1) / (2 * a)) << endl;
    }
    else
    {
        root1 = (-b + sqrt(d) * 1LL) * 1LL / (2 * a * 1LL);
        root2 = (-b - sqrt(d) * 1LL) * 1LL / (2 * a * 1LL);

        cout << "Root1 " << root1 << " Root2 " << root2 << endl;
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