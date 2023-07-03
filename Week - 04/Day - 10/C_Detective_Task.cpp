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

    if (s.size() == 1)
    {
        cout << 1 << endl;
        return;
    }

    bool all_question = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '?')
            all_question = false;
    }

    if (all_question)
    {
        cout << s.size() << endl;
        return;
    }

    if (s[0] == '0' or s[s.size() - 1] == '1')
    {
        cout << 1 << endl;
        return;
    }

    int last_one = -1, count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
            last_one = i;
    }
    // cout << "LASt one" << last_one << endl;
    if (last_one != -1)
    {
        for (int i = last_one + 1; i < s.size(); i++)
        {
            if (s[i] == '0' or i == s.size() - 1)
            {
                count += (i - last_one + 1);
                break;
            }
        }
    }
    else if (last_one == -1)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '0')
            {
                count++;
            }
            else if (s[i] == '0')
            {
                count++;
                break;
            }
        }
    }
    cout << count << endl;
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