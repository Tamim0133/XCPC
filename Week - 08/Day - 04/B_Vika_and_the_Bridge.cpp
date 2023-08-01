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
    int n, k;
    cin >> n >> k;
    int ans = INT_MAX;

    vector<int> adj[k + 1];

    int start_plank = 0, end_plank = n + 1;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        adj[x].push_back(i);
    }

    for (int i = 1; i <= k; i++)
    {
        adj[i].push_back(end_plank);
    }
    for (int i = 1; i <= k; i++)
    {
        // cout << i << " -> ";
        int count = 0, temp;
        vector<int> arr;
        for (auto u : adj[i])
        {
            // cout << u << " ";
            if (count == 0)
            {
                arr.push_back(u - start_plank - 1);
                count++;
            }
            else
            {
                arr.push_back(u - temp - 1);
            }
            count++;
            temp = u;
        }
        // cout << endl;

        sort(arr.rbegin(), arr.rend());

        arr[0] /= 2;
        sort(arr.rbegin(), arr.rend());
        // for (auto i : arr)
        //     cout << i << " ";
        // cout << endl;

        ans = min(ans, arr[0]);
    }
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