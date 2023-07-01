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
#define ll long long int;

void solve()
{
    string s;
    cin >> s;

    // for (auto i : s)
    //     cout << (int)i - (int)'a' + 1 << " ";
    // cout << endl;

    int n = s.size();

    multimap<char, int> ans;
    vector<int> real_ans;
    stack<int> temp;

    int mini = abs(s[n - 1] - s[0]);

    int high, low;

    if (s[n - 1] > s[0])
    {
        high = s[n - 1];
        low = s[0];
    }
    else
    {
        high = s[0];
        low = s[n - 1];
    }

    // ans.push_back(1);
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i] <= high and s[i] >= low)
        {
            // ans[s[i]] = i + 1;
            ans.insert({s[i], i + 1});
        }
        //     ans.push_back(i + 1);
    }
    if (s[0] > s[n - 1])
    {
        for (auto i : ans)
        {
            temp.push(i.second);
        }
    }
    // ans.push_back(n);
    real_ans.push_back(1);
    if (s[0] <= s[n - 1])
    {
        for (auto i : ans)
            real_ans.push_back(i.second);
    }
    else
    {
        while (!temp.empty())
        {
            real_ans.push_back(temp.top());
            temp.pop();
        }
    }

    real_ans.push_back(n);

    cout << mini << " " << real_ans.size() << endl;

    for (auto i : real_ans)
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