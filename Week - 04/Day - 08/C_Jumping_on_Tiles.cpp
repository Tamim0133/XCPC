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
    string s;
    cin >> s;

    vector<int> arr;
    multimap<int, int> temp;

    for (auto i : s)
    {
        // cout << i - '0' - 48 << " ";
        arr.push_back(i - '0' - 48);
    }
    // cout << endl;

    cout << abs(arr[0] - arr[arr.size() - 1]) << " ";
    // cout << endl;

    int maxi, mini;
    maxi = max(arr[0], arr[arr.size() - 1]);
    mini = min(arr[0], arr[arr.size() - 1]);

    for (int i = 1; i < arr.size() - 1; i++)
    {
        if (arr[i] > maxi or arr[i] < mini)
        {
            continue;
        }
        else
        {
            temp.insert({arr[i], i});
        }
    }

    vector<int> ans;
    for (auto i : temp)
        ans.push_back(i.second);
    if (maxi == arr[0])
    {
        reverse(ans.begin(), ans.end());
    }

    cout << ans.size() + 2 << endl;

    cout << 1 << " ";

    for (auto i : ans)
        cout << i + 1 << " ";

    cout << arr.size() << endl;
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