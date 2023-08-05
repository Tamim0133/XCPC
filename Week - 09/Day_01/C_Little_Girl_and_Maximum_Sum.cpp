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
    ll n, q;
    cin >> n >> q;

    vector<ll> arr(n + 1), new_arr(n + 1), freq(n + 1, 0), diff(n + 2, 0), pre_sum(n + 1, 0);
    vector<pair<ll, ll>> query, freq_pair;

    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    sort(arr.rbegin(), arr.rend());

    for (int i = 1; i <= q; i++)
    {
        int a, b;
        cin >> a >> b;

        diff[a]++;
        diff[b + 1]--;

        query.push_back({a, b});
    }

    freq[1] = diff[1];
    for (int i = 2; i <= n; i++)
    {
        freq[i] = freq[i - 1] + diff[i];
    }

    for (int i = 1; i <= n; i++)
    {
        freq_pair.push_back({freq[i], i});
    }
    sort(freq_pair.rbegin(), freq_pair.rend());

    // for (int i = 0; i < n; i++)
    // {
    //     cout << freq_pair[i].first << " " << freq_pair[i].second << endl;
    //     // cout << freq[i] << " " << i << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        new_arr[freq_pair[i].second - 1] = arr[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << new_arr[i] << " ";
    // }
    // cout << endl;

    // pre_sum[1] = new_arr[0];
    for (int i = 1; i <= n; i++)
    {
        pre_sum[i] = pre_sum[i - 1] + new_arr[i - 1];
    }
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << pre_sum[i] << " ";
    // }
    // cout << endl;

    ll ans = 0;

    for (int i = 0; i < q; i++)
    {
        ans += pre_sum[query[i].second] - pre_sum[query[i].first - 1];
    }
    // cout << endl;

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    solve();
    return 0;
}