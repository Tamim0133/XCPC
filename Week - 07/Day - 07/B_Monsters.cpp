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

    vector<pair<int, int>> arr;
    vector<pair<int, int>> brr;

    priority_queue<pair<int, int>> pq;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        int a = x % k;
        // cout << a << " ";
        if (a == 0)
            arr.push_back({a, (i + 1)});
        else
            brr.push_back({a, -(i + 1)});
    }

    sort(arr.rbegin(), arr.rend());
    sort(brr.rbegin(), brr.rend());
    // reverse(arr.begin(), arr.end());

    for (int i = arr.size() - 1; i >= 0; i--)
        // cout << arr[i].first << " " << arr[i].second << endl;
        cout << arr[i].second << " ";

    // cout << endl;
    if (brr.empty())
        return;

    // set<int> set;
    // for (int i = 0; i < brr.size(); i++)
    // {
    //     set.insert(brr[i].first);
    // }
    // if (set.size() == 1)
    // {
    //     cout << "Fir"
    //          << " ";
    //     for (int i = brr.size() - 1; i >= 0; i--)
    //         // cout << arr[i].first << " " << arr[i].second << endl;
    //         // cout << brr[i].second << " ";
    //         cout << brr[i].first << " : " << brr[i].second << " ";
    // }
    // else
    {
        // for (int i = brr.size() - 1; i >= 0; i--)
        for (int i = 0; i < brr.size(); i++)
            // cout << arr[i].first << " " << arr[i].second << endl;
            cout << -brr[i].second << " ";
        // cout << brr[i].first << " : " << brr[i].second << " ";
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