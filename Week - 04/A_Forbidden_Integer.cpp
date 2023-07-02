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
    int n, k, x;
    cin >> n >> k >> x;

    vector<int> ans;

    if (x != 1)
    {
        for (int i = 0; i < n; i++)
        {
            ans.push_back(1);
        }
    }
    // else if (x == 1 and k == 1)
    // {
    //     cout << "NO" << endl;
    // }
    else if (x == 1)
    {
        if (k == 1)
        {
            cout << "NO" << endl;
            return;
        }
        else if (k == 2 and n & 1)
        {
            cout << "NO" << endl;
            return;
        }
        else if (k == 2)
        {
            // cout << "YES" << endl;
            int k = n / 2;
            while ((k)--)
            {
                ans.push_back(2);
            }
        }
        else if (k > 2)
        {
            while (n)
            {
                if (n & 1)
                {
                    n -= 3;
                    ans.push_back(3);
                }
                else
                {
                    n -= 2;
                    ans.push_back(2);
                }
            }
        }
    }
    cout << "YES" << endl;
    cout << ans.size() << endl;
    for (auto i : ans)
        cout << i << " ";
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
