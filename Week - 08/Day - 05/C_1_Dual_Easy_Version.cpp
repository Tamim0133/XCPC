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
    int zero = 0;
    int pos = 0;
    int neg = 0;

    int n;
    cin >> n;

    vector<int> arr(n + 1);
    int maxi = INT_MIN;
    int max_i = 0;

    for (int i = 1; i <= n; i++)
    {
        int temp = maxi;
        cin >> arr[i];

        zero += arr[i] == 0;
        pos += arr[i] > 0;
        neg += arr[i] < 0;

        maxi = max(maxi, arr[i]);

        if (temp != maxi)
            max_i = i;
    }

    if (pos == n)
    {
        cout << n - 1 << endl;

        for (int i = 2; i <= n; i++)
        {
            cout << i << " " << i - 1 << endl;
        }
        return;
    }
    if (neg == n)
    {
        cout << n - 1 << endl;

        for (int i = n; i >= 2; i--)
        {
            cout << i - 1 << " " << i << endl;
        }
        return;
    }

    vector<pair<int, int>> ans;

    while (arr[max_i])
    {
        arr[max_i] += arr[max_i];
        ans.push_back({max_i, max_i});
    }
    for (int i = 1; i <= n; i++)
    {
        ans.push_back({i, max_i});
    }
    cout << ans.size() << endl;
    for (auto i : ans)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;
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