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
    int n;
    cin >> n;

    vector<ll> arr(n);
    ll sum = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    int temp = 0, mini = n, count = 0;

    for (int i = 0; i < n; i++)
    {
        temp += arr[i]; // টেম্পোরারি সাম বেরকরার জন্য
        count++;        // প্রতিটা সেগমেন্ট এর যটগুলা এলিমেন্ট আছে

        int temp_max = 0; //

        if (sum % temp == 0) // যদি  ডিভাইড হয় তাহলেই answer হতে পরে
        {
            temp_max = count;                 //
            int temp_sum = 0, temp_count = 0; // অমরা এখন খুঁজবো আর কোথায় এমন সেগমেন্ট আছে যেখানে সেম যোগফল হয়

            for (int j = i + 1; j < n; j++)
            {
                temp_sum += arr[j]; // এইখানে সেকেন্ড সেগমেন্ট এর যোগফল রাখব
                temp_count++;       // এইটার ও কাউন্ট রাখতেছি

                if (temp_sum == temp) // যদি  উপরের কাউন্ট এর মতো এই কাউন্ট ও হয়
                {
                    temp_max = max(temp_max, temp_count); // অমরা কাউন্ট রাখতেছি যে  ম্যাক্সিমাম কত সংখ্য়া হতে পরে
                    temp_sum = 0;                         // যদি মিলে যাই তাহলে আর আমাদের টেম্প রাখা লাগবে না
                    temp_count = 0;                       // কাউন্ট ও জিরো করে দিব
                }
            }
            if (temp_sum == 0) // এন পর্য্যন্ত সবগুলা সিইক করার পর যদি দেখি সব ঠিক ঠাক  তাহলে অমরা মেইন্তা সেঞ্জ করবো
            {
                mini = min(mini, temp_max);
            }
        }
    }
    cout << mini << endl;
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